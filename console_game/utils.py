from random import randint as rand
from point import Point


def rand_bool(r, mxr):
    t = rand(0, mxr)
    return t <= r


def rand_point(w, h):
    p = Point(rand(0, h - 1), rand(0, w - 1))
    return p


def rand_length(mn, mx):
    return rand(mn, mx)


def rand_near_point(point):
    moves = [(-1, 0), (0, 1), (1, 0), (0, -1)]
    t = rand(0, 3)
    return Point(point.x + moves[t][0], point.y + moves[t][1])
