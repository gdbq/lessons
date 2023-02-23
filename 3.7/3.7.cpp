//https://github.com/gdbq/lessons/tree/main/3.7
#include <iostream>

using std::string;

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
        std::cout << i << std::endl;
    }
    std::cout << sum << std::endl;
}

