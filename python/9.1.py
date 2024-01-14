n = int(input("Введите количество чисел: "))
nums = list(map(int, input("Введите числа через пробел: ").split()))[::n]
u = set(nums)
print(len(u))
