def dic(num):
    if num % 10 == 1 and num != 11 and num % 100 != 11:
        return 'год'
    elif 1 < num % 10 <= 4 and num != 12 and num != 13 and num != 14:
        return 'года'
    else:
        return 'лет'


pets = {}

while True:

    name_pet = input("Введите имя питомца (для завершения ввода оставьте поле пустым): ")
    if name_pet == '':
        break
    else:
        type_pet = input('Введите вид питомца: ')
        age = int(input('Введите возраст питомца: '))
        own = input('Введите имя владельца: ')
        pets[name_pet] = {'type_pet': type_pet, 'age': age, 'own': own}

for name_pet in pets.keys():
    type_pet = pets[name_pet]['type_pet']
    age = pets[name_pet]['age']
    own = pets[name_pet]['own']

    print(f'Это {type_pet} по кличке "{name_pet}". Возраст питомца: {age} {dic(age)}. Имя владельца: {own}')
