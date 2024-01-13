a = int(input('Введите число A:'))
b = int(input('Введите число B: '))

for a in range(a, b + 1):
    if a % 2 == 0:
        print(a, end=' ')
