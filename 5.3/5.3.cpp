//https://github.com/gdbq/lessons/tree/main/5.3
#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::string;

int main() {
    system("chcp 65001");
    int n = 0, n2 = 0, min = -2, max = 7;
    int mas_n[100][100];
    std::cout << "Введите первый размер массива:";
    std::cin >> n;
    std::cout << "Введите второй размер массива: ";
    std::cin >> n2;
    std::cout << std::endl;
    srand(time(NULL));

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n2; i++) {
            mas_n[j][i] = min + rand() % (max - min + 1);
        }
    }

    for (int j = 0; j < n; ++j) {

        for (int i = 0; i < n2; i++) {
            std::cout << mas_n[j][i] << " ";
        }
        std::cout << std::endl;
    }

}







