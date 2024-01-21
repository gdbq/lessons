from map import Map
from helicopter import Helicopter
import time
import os
import json
from pynput import keyboard

TICK_SLEEP = 0.05
MAP_W, MAP_H = 20, 10
TREE_UPDATE = 50
FIRE_UPDATE = 100
CLOUD_UPDATE = 100
MOVES = {'w': (-1, 0), 'd': (0, 1), 's': (1, 0), 'a': (0, -1)}


def on_release(key):
    c = key.char.lower()
    global helicopter, field, tick
    if c in MOVES.keys():
        helicopter.move(MOVES[c][0], MOVES[c][1])
    elif c == "f":
        data = {
            "helicopter": helicopter.export_data(),
            "clouds": field.clouds.export_data(),
            "field": field.export_data(),
            "tick": tick
        }
        with open("level.json", "w") as lvl:
            json.dump(data, lvl)
    elif c == "g":
        with open("level.json", "r") as lvl:
            data = json.load(lvl)
            helicopter.import_data(data["helicopter"])
            tick = data["tick"]
            field.import_data(data["field"])
            field.clouds.import_data(data["clouds"])


listener = keyboard.Listener(on_press=None, on_release=on_release)
listener.start()
if __name__ == '__main__':
    field = Map(MAP_W, MAP_H)
    helicopter = Helicopter(MAP_W, MAP_H)
    field.update_fire(helicopter)
    tick = 1
    while True:
        os.system("cls")

        if tick % TREE_UPDATE == 0:
            field.add_tree()
        if tick % FIRE_UPDATE == 0:
            field.update_fire(helicopter)
        if tick % CLOUD_UPDATE == 0:
            field.clouds.update()
        field.process_helicopter(helicopter)

        helicopter.print_stats()
        field.print_map(helicopter)
        print("TICK:", tick, helicopter.position.x, helicopter.position.y)
        tick += 1
        time.sleep(TICK_SLEEP)
