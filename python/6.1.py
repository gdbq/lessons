n = int(input("Введите количество чисел: "))
c = 0
for a in range(n):
    num = int(input(f'Введите {a + 1} целое число: '))
    if num == 0:
        c += 1
print(f'Количество нулей: {c}')
