#include <iostream>

using std::string;

int main() {
    system("chcp 65001");
    int count = 0, sum = 0, min = 0, max = 0, input = 0;
    std::cout << "Введите колличество целочисленных элементов: ";
    std::cin >> count;

    for (int i = 1; i <= count; i++) {
        std::cout << "Введите " << i << " значение: ";
        std::cin >> input;

        if (i == 1) { min = input; }

        min = min < input ? min : input;
        max = max > input ? max : input;
        sum = sum + input;
    }

    std::cout << std::endl;
    std::cout << "Минимальное значение: " << min << std::endl;
    std::cout << "Максимальное значение: " << max << std::endl;
    std::cout << "Сумма значений: " << sum << std::endl;
    std::cout << "Среднее арифметическое: " << float(sum) / float(count) << std::endl;
}

