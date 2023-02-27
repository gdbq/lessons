//https://github.com/gdbq/lessons/tree/main/6.4
#include <iostream>
#include <cstring>

using std::string;

int main() {
    system("chcp 65001");
    char str[100];
    char str_buf[100];
    std::cout << "Введите слово: ";
    std::cin >> str;

    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i + 1];
    }
    std::cout << str << std::endl;

    int len = strlen(str) - 1;

    for (int i = len; i >= 0; i--) {
        str_buf[len - i] = str[i];
    }
    str_buf[len + 1] = str[len + 1];
    std::cout << str_buf << std::endl;

}