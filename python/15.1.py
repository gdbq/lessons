class Transport:
    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage


class Autobus(Transport):
    def __str__(self):
        return f'Название автомобиля: {self.name} Скорость: {self.max_speed} Пробег: {self.mileage}'


autobus = Autobus("Renault Logan", 180, 12)
print(autobus)
