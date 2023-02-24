//https://github.com/gdbq/lessons/tree/main/4.3
#include <iostream>

using std::string;

int main() {
    system("chcp 65001");
    int n = 0;
    int mas_n[100];
    std::cout << "Введите колличество элементов не более 100:";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Введите  значение для индекса " << i << ": ";
        std::cin >> mas_n[i];
    }

    bool unsorted = true;
    while (unsorted) {
        unsorted = false;
        for (int i = 0; i < n - 1; i++) {
            if (mas_n[i] > mas_n[i + 1]) {
                unsorted = true;
                int z = mas_n[i];
                mas_n[i] = mas_n[i + 1];
                mas_n[i + 1] = z;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << mas_n[i] << " ";
    }

}



