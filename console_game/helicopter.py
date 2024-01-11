import os

from utils import rand_point
from point import Point

TANK_TILES = "🛢️"
SCORE_TILES = "🏆"
LIVES_TILES = "💛"


class Helicopter:
    def __init__(self, w, h):
        self.w, self.h = w, h
        self.position = rand_point(w, h)
        self.mxtank = 1
        self.tank = 0
        self.score = 0
        self.lives = 200

    def move(self, dx, dy):
        np = Point(dx + self.position.x, dy + self.position.y)
        if 0 <= np.x < self.h and 0 <= np.y < self.w:
            self.position = np
        else:
            print("STOP!!!")

    def print_stats(self):
        print(TANK_TILES, end=" ")
        print(self.tank, "/", self.mxtank, sep="", end=" | ")
        print(SCORE_TILES, self.score, end=" | ")
        print(LIVES_TILES, self.lives)

    def game_over(self):
        os.system("cls")
        print("X" * 30)
        print(" ")
        print("GAME OVER, YOUR SCORE IS", self.score)
        print(" ")
        print("X" * 30)
        exit(0)

    def export_data(self):
        return {
            "score": self.score,
            "lives": self.lives,
            "x": self.position.x,
            "y": self.position.y,
            "tank": self.tank,
            "mxtank": self.mxtank,
        }

    def import_data(self, data):
        self.score = data["score"] or 0
        self.lives = data["lives"] or 0
        self.position = Point(data["x"] or 0, data["y"] or 0)
        self.tank = data["tank"] or 0
        self.mxtank = data["mxtank"] or 0
