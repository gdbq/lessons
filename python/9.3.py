s = set()
nums = map(int, input("Введите числа через пробел: ").split())
for a in nums:
    if a not in s:
        s.add(a)
        print(f'{a}: NO')
    else:
        print(f'{a}:YES')
