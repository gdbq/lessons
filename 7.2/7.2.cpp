//https://github.com/gdbq/lessons/tree/main/7.2
#include <iostream>


using std::string;

void fill_array(int array[], int len) {

    for (int i = 0; i < len; i++) {
        std::cout << "Введите  значение для индекса " << i << ": ";
        std::cin >> array[i];
    }

    std::cout << std::endl;

    for (int i = 0; i < len; i++) {
        std::cout << array[i] << "    ";
    }
    std::cout << std::endl;
}

int main() {
    system("chcp 65001");
    int n = 0, n2 = 0;
    int mas1[100];
    int mas2[200];
    std::cout << "Введите размер первого массива:";
    std::cin >> n;
    std::cout << std::endl;
    fill_array(mas1, n);

    std::cout << "Введите размер второго массива: ";
    std::cin >> n2;
    std::cout << std::endl;
    fill_array(mas2, n2);
    return 1;
}