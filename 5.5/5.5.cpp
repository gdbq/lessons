//https://github.com/gdbq/lessons/tree/main/5.5
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
    bool is_second_more = n2 > n;

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

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n2; i++) {
            if ((is_second_more && i > j)||(!is_second_more && i < j))
            {
                t = mas_n[j][i];
                mas_n[j][i] = mas_n[i][j];
                mas_n[i][j] = t;
            }

        }
    }


    std::cout << std::endl;
    for (int j = 0; j < n2; ++j) {
        for (int i = 0; i < n; i++) {
            std::cout << mas_n[j][i] << "    ";
        }
        std::cout << std::endl;
    }

}








