from clouds import Clouds
from utils import rand_bool, rand_point, rand_near_point, rand_length


EMPTY, TREE, WATTER, SHOP, HOSPITAL, FIRE = 0, 1, 2, 3, 4, 5
CELL_TYPES = "🟩🌲🌊🏪🏥🔥"
BOUND_TYPE = "⬛"
PLAYER_TYPE = "🚁"
CLOUD_TYPE = "⚪"
THUNDER_CLOUD_TYPE = "🔵"
TREE_BONUS = 100
UPGRADE_COST = 5000
LIVES_COST = 1000


class Map:

    def __init__(self, w, h):
        self.w = w
        self.h = h
        self.cells = [[0 for i in range(w)] for j in range(h)]
        self.generate_forest(5, 10)
        self.generate_rivers(5, 2, 2)
        self.generate_upgrade_shop()
        self.generate_hospital()
        self.clouds = Clouds(self.w, self.h)

    def check_bounds(self, point):
        if point.x < 0 or point.y < 0 or point.x >= self.h or point.y >= self.w:
            return False
        return True

    def set_type_cell(self, point, a_type, c_type=-1):
        if self.check_bounds(point) and (c_type < 0 or self.cells[point.x][point.y] == c_type):
            self.cells[point.x][point.y] = a_type
            return True
        return False

    def print_map(self, helicopter):
        print(BOUND_TYPE * (self.w + 2))
        for ri in range(self.h):
            print(BOUND_TYPE, end="")
            for ci in range(self.w):
                cell = self.cells[ri][ci]
                if self.clouds.cells[ri][ci] == 1:
                    print(CLOUD_TYPE, end="")
                elif self.clouds.cells[ri][ci] == 2:
                    print(THUNDER_CLOUD_TYPE, end="")
                elif helicopter.position.x == ri and helicopter.position.y == ci:
                    print(PLAYER_TYPE, end="")
                else:
                    print(CELL_TYPES[cell], end="")

            print(BOUND_TYPE)
        print(BOUND_TYPE * (self.w + 2))

    def generate_forest(self, r, mxr):
        for ri in range(self.h):
            for ci in range(self.w):
                if rand_bool(r, mxr):
                    self.cells[ri][ci] = TREE

    def generate_rivers(self, count, min_length, max_length):
        while count > 0:
            self.generate_river(rand_length(min_length, max_length))
            count -= 1

    def generate_river(self, length):
        rp = self.rand_cell()
        self.set_type_cell(rp, WATTER)
        length -= 1
        while length > 0:
            rnp = rand_near_point(rp)
            if self.set_type_cell(rnp, WATTER):
                rp = rnp
                length -= 1

    def generate_upgrade_shop(self):
        self.set_type_cell(self.rand_cell(), SHOP)

    def generate_hospital(self):
        while not self.set_type_cell(self.rand_cell(), HOSPITAL, EMPTY):
            pass

    def add_fire(self):
        self.set_type_cell(self.rand_cell(), FIRE, TREE)

    def add_tree(self):
        self.set_type_cell(self.rand_cell(), TREE, EMPTY)

    def update_fire(self):
        for ri in range(self.h):
            for ci in range(self.w):
                if self.cells[ri][ci] == FIRE:
                    self.cells[ri][ci] = EMPTY
        for i in range(5):
            self.add_fire()

    def process_helicopter(self, helico):

        c = self.cells[helico.position.x][helico.position.y]
        d = self.clouds.cells[helico.position.x][helico.position.y]
        if c == WATTER:
            helico.tank = helico.mxtank
        if c == FIRE and helico.tank > 0:
            if self.set_type_cell(helico.position, TREE, FIRE):
                helico.tank -= 1
                helico.score += TREE_BONUS
        if c == SHOP and helico.score >= UPGRADE_COST:
            helico.score -= UPGRADE_COST
            helico.mxtank += 1
        if c == HOSPITAL and helico.score >= LIVES_COST:
            helico.score -= LIVES_COST
            helico.lives += 100
        if d == 2:
            helico.lives -= 10
            if helico.lives <= 0:
                helico.game_over()

    def rand_cell(self):
        return rand_point(self.w, self.h)

    def export_data(self):
        return {"cells": self.cells}

    def import_data(self, data):
        self.cells = data['cells'] or [[0 for i in range(self.w)] for j in range(self.h)]
