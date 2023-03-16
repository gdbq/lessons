//https://github.com/gdbq/lessons/tree/main/7.4
#include <iostream>
#include <cstring>

using std::string;


char *replace_first_and_last(char str[], char replace_char) {
    str[0] = replace_char;
    str[strlen(str) - 1] = replace_char;
    return str;
}

void trim(char str[], char out[100]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end && str[start] == ' ') {
        start++;
    }

    while (end > 0 && str[end] == ' ') {
        end--;
    }

    int f = 0;
    for (int i = start; i <= end; i++) {
        out[f] = str[i];
        f++;
    }
}


int main() {
    system("chcp 65001");
    char str[100];
    char str2[100];
    char replace_char;
    std::cout << "Введите слово: ";
    std::cin >> str;

    std::cout << "Введите символ: ";
    std::cin >> replace_char;

    std::cout << replace_first_and_last(str, replace_char) << std::endl;

    std::cout << "Введите слово: ";
    std::cin >> str;

    trim(str, str2);
    std::cout << str2 << std::endl;
}