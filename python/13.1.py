import random


def matrix_addition(matrix_1, matrix_2):
    return [[matrix_1[i][j] + matrix_2[i][j] for j in range(len(m1))] for i in range(len(m1[0]))]


def get_random_matrix(a, b, mn, mx):
    return [[random.randint(mn, mx) for j in range(a)] for i in range(b)]


m1 = get_random_matrix(10, 10, -5, 8)
m2 = get_random_matrix(10, 10, -4, 8)
print(m1)
print(m2)
print(matrix_addition(m1, m2))
