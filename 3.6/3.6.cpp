
//https://github.com/gdbq/lessons/tree/main/3.6
#include <iostream>

using std::string;

int main() {
    system("chcp 65001");
    for (int i = 1; i <= 10; i++) {
        std::cout << "5 * " << i << " = " << 5 * i << std::endl;
    }
    std::cout << std::endl;

    int i = 0;
    while (i != 7) {
        std::cout << "Введите число: ";
        std::cin >> i;

        if (i > 7) {
            std::cout << "Ваше число больше загаданного." << std::endl;
        } else if (i < 7) {
            std::cout << "Ваше число меньше загаданного." << std::endl;
        }else{
            break;
        }

        if (i > 10) {
            std::cout << "Ваше число больше 10." << std::endl;
        } else if (i < 10) {
            std::cout << "Ваше число меньше 10" << std::endl;
        }

        if (i % 2 == 0) {
            std::cout << "Ваше число делиться на 2." << std::endl;
        } else {
            std::cout << "Ваше число не делиться на 2." << std::endl;
        }

        if (i % 3 == 0) {
            std::cout << "Ваше число делиться на 3." << std::endl;
        } else {
            std::cout << "Ваше число не делиться на 3." << std::endl;
        }

    }

    std::cout << "Вы угадали это число 7" << std::endl;
}