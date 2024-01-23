import random


def matrix_addition(matrix_1, matrix_2):
    return [[matrix_1[i][j] + matrix_2[i][j] for j in range(len(matrix_1[0]))] for i in range(len(matrix_1))]


def get_random_matrix(a, b, mn, mx):
    return [[random.randint(mn, mx) for j in range(a)] for i in range(b)]


a = random.randint(1, 10)
b = random.randint(1, 10)
print(f'{a}X{b}')
m1 = get_random_matrix(a, b, -5, 8)
m2 = get_random_matrix(a, b, -4, 8)
print(m1)
print(m2)
print(matrix_addition(m1, m2))

