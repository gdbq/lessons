https://github.com/gdbq/lessons/tree/main/3.5
#include <iostream>

using std::string;

int main() {
    for (int i = 0; i < 9; i++) {
        std::cout << (i+1) << ". Hello" << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < 15; i++) {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;
    for (int i = 1; i < 15; i = i + 2) {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;
    int sum = 0;
    for (int i = 5; i <= 15; i++) {
        sum = sum + i;
    }
    std::cout << sum << std::endl;
}