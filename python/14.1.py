my_list = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]


def rp(l):
    if len(l) > 0:
        print(l.pop(0))
        rp(l)
    else:
        print("Конец списка.")


rp(my_list)
