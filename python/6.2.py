x = int(input("Введите число: "))
nd = 0
for a in range(1, x + 1):
    if x % a == 0:
        nd += 1
print(f'Количество делителей: {nd}')
