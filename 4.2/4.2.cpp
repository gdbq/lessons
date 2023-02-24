//https://github.com/gdbq/lessons/tree/main/4.2
#include <iostream>

using std::string;

int main() {
    system("chcp 65001");
    int mas[7];

    for (int i = 0; i < 7; i++) {
        std::cout << "Введите  значение для индекса " << i << ": ";
        std::cin >> mas[i];
    }

    for (int i = 0; i < 7; i++) {
        std::cout << i << " - " << mas[i] << std::endl;

    }

    int n = 0;
    std::cout << "Введите колличество элементов не более 100:";
    std::cin >> n;
    int mas_n[100];
    for (int i = 0; i < n; i++) {
        std::cout << "Введите  значение для индекса " << i << ": ";
        std::cin >> mas_n[i];
    }

    for (int i = 0; i < n; i++) {
        std::cout << mas_n[i] << " ";
    }

}

