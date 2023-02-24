//https://github.com/gdbq/lessons/tree/main/4.4
#include <iostream>

using std::string;

int main() {
    system("chcp 65001");
    int n = 0, max = 0, min = 0, sum = 0;
    int mas_n[100];
    std::cout << "Введите колличество элементов не более 100:";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Введите  значение для индекса " << i << ": ";
        std::cin >> mas_n[i];
    }

    min = max = mas_n[0];
    for (int i = 0; i < n; i++) {
        min = min < mas_n[i] ? min : mas_n[i];
        max = max > mas_n[i] ? max : mas_n[i];
        sum += mas_n[i];
    }

    float sr = (float) sum / (float) n;

    std::cout << "Минимальное значение: " << min << std::endl;
    std::cout << "Максимальное значение: " << max << std::endl;
    std::cout << "Сумма значений: " << sum << std::endl;
    std::cout << "Среднее арифметическое: " << sr << std::endl;

}



