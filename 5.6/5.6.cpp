//https://github.com/gdbq/lessons/tree/main/5.6
#include <iostream>


using std::string;

int main() {
    system("chcp 65001");
    int n = 0, n2 = 0, t = 0;
    int mas_n[100][100];
    std::cout << "Введите первый размер массива:";
    std::cin >> n;
    std::cout << "Введите второй размер массива: ";
    std::cin >> n2;
    std::cout << std::endl;

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n2; i++) {
            std::cout << "Введите  значение для индекса " << j << "," << i << ": ";
            std::cin >> mas_n[j][i];

        }
    }

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n2; i++) {
            std::cout << mas_n[j][i] << "    ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int j = 0; j < n; ++j) {
        bool unsorted = true;
        while (unsorted) {
            unsorted = false;
            for (int i = 0; i < n2 - 1; i++) {
                if (mas_n[j][i] > mas_n[j][i + 1]) {
                    unsorted = true;
                    t = mas_n[j][i];
                    mas_n[j][i] = mas_n[j][i + 1];
                    mas_n[j][i + 1] = t;
                }
            }
        }
    }


    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n2; i++) {
            std::cout << mas_n[j][i] << "    ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int j = 0; j < n; ++j) {
        t = mas_n[j][0];
        mas_n[j][0] = mas_n[j][n2 - 1];
        mas_n[j][n2 - 1] = t;
    }

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n2; i++) {
            std::cout << mas_n[j][i] << "    ";
        }
        std::cout << std::endl;
    }

}








