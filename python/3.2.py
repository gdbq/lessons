stages = [
    "Australopithecus",
    "Homo habilis",
    "Homo erectus",
    "Homo sapiens",
    "Homo neanderthalensis",
    "Homo sapiens sapiens"
]

result = []

for a in range(6):
    result.append(input(f'Введите {a + 1} стадию развитя человека: '))
print(" => ".join(result))
