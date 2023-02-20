//https://github.com/gdbq/lesson2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>

int main()
{
    int a, b;
    printf("a=");
    (void)scanf("%i", &a);
    printf("b=");
    (void)scanf("%i", &b);

    setlocale(LC_ALL, "Russian");
    //Лучше тут использовать else if, но так как урок про ветвления оставлю так.
    if (a > b) {

        printf("Больше");

    }
    else {

        if (a == b) {

            printf("Равны");

        }
        else {

            printf("Меньше");

        }
    }

}

