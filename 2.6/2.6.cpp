//https://github.com/gdbq/lessons/tree/main/pr5
#include <iostream>

using std::string;

int main() {
    system("chcp 65001");
    int day, month, year;
    std::cout << "день=";
    std::cin >> day;
    std::cout << "месяц=";
    std::cin >> month;
    std::cout << "год=";
    std::cin >> year;

    string leap_year = (year % 4 == 0 ? "Високосный" : "Не високосный");

    string east;
    switch ((year + 8) % 12) {
        case 0: {
            east = "Крысы";
        }
            break;
        case 1: {
            east = "Быка";
        }
            break;
        case 2: {
            east = "Тигра";
        }
            break;
        case 3: {
            east = "Заяца";
        }
            break;
        case 4: {
            east = "Дракона";
        }
            break;
        case 5: {
            east = "Змеи";
        }
            break;
        case 6: {
            east = "Лошадьи";
        }
            break;
        case 7: {
            east = "Овцы";
        }
            break;
        case 8: {
            east = "Обезьяны";
        }
            break;
        case 9: {
            east = "Петуха";
        }
            break;
        case 10: {
            east = "Собаки";
        }
            break;
        case 11: {
            east = "Свиньи";
        }
            break;
        default: {
            east = "error";
        }
    }

    string zodiac;

    if ((month == 12 && day >= 23) || (month == 1 && day <= 20)) {
        zodiac = "Козерог";
    } else if ((month == 1 && day >= 21) || (month == 2 && day <= 19)) {
        zodiac = "Водолей";
    } else if ((month == 2 && day >= 20) || (month == 3 && day <= 20)) {
        zodiac = "Рыбы";
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
        zodiac = "Овен";
    } else if ((month == 4 && day >= 21) || (month == 5 && day <= 21)) {
        zodiac = "Телец";
    } else if ((month == 5 && day >= 22) || (month == 6 && day <= 21)) {
        zodiac = "Близнецы";
    } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        zodiac = "Рак";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 21)) {
        zodiac = "Лев";
    } else if ((month == 8 && day >= 22) || (month == 9 && day <= 23)) {
        zodiac = "Дева";
    } else if ((month == 9 && day >= 24) || (month == 10 && day <= 23)) {
        zodiac = "Весы";
    } else if ((month == 10 && day >= 24) || (month == 11 && day <= 22)) {
        zodiac = "Скорпион";
    } else if ((month == 11 && day >= 23) || (month == 12 && day <= 22)) {
        zodiac = "Стрелец";
    } else {
        zodiac = "Error";
    }


    std::cout << leap_year << " год " << east << std::endl;
    std::cout << "Знак зодака: " <<  zodiac << std::endl;


}
