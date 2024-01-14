def last_to_first(l):
    tmp = l.pop(len(l) - 1)
    l.insert(0, tmp)
    return l


n = int(input("Введите количество чисел: "))
nums = list(map(int, input("Введите числа через пробел: ").split()))
print(last_to_first(nums))
