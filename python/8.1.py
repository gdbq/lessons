n = int(input("Введите количество чисел: "))
l = list()
for a in range(1, n + 1):
    num = int(input(f'Введите {a} число: '))
    l.append(num)
print(l[::-1])
