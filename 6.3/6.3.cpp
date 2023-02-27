//https://github.com/gdbq/lessons/tree/main/6.3
#include <iostream>
#include <cstring>

using std::string;

int main() {
    system("chcp 65001");
    char str[100];
    std::cout << "Введите слово: ";
    std::cin >> str;
    std::cout << "Второй символ: "<< str[1] << std::endl;
    char last_char = str[strlen(str) - 1];
    std::cout << "Последний символ: " << last_char << std::endl;
    str[strlen(str) - 1] = str[0];
    str[0] = last_char;
    std::cout << str << std::endl;

    int n = 0;
    std::cout << "Введите символ для удаления: ";
    std::cin >> n;

    for(int i=n-1;i<strlen(str);i++){

        str[i] = str[i + 1];
    }

    std::cout << str << std::endl;

}