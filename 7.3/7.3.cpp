//https://github.com/gdbq/lessons/tree/main/7.3
#include <iostream>


using std::string;


int is_natural_square(int num) {

    for (int i = num - 2; i > 1; i--) {
        if (i * i == num) {
            return i;
        }
    }
    return 0;
}


void is_natural_square(int num, bool *is_square) {

    for (int i = num - 2; i > 1; i--) {
        if (i * i == num) {
            *is_square = true;
            return;
        }
    }
    *is_square = false;
}

void is_natural_square(int num, int &num2) {
    for (int i = num - 2; i > 1; i--) {
        if (i * i == num) {
            num2 = i;
        }
    }
}


int main() {
    system("chcp 65001");
    int n = 0, n2 = 0, n3 = 0, count = 0;
    std::cout << "Введите первое натурально число :";
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "Введите первое натурально число :";
    std::cin >> n2;
    std::cout << std::endl;
    std::cout << "Введите первое натурально число :";
    std::cin >> n3;
    std::cout << std::endl;

    if (is_natural_square(n) > 0) {
        count++;
    }

    bool is_squared = false;
    is_natural_square(n2, &is_squared);
    if (is_squared) {
        count++;
    }

    int t = 0;
    is_natural_square(n3, t);
    if (t > 0) {
        count++;
    }
    std::cout << count << " квадрат(а)" << std::endl;


    return 1;
}
