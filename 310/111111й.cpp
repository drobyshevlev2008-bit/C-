#include <iostream>
#include <string>

int main() {
    long long number;
    std::cout << "Введите число: ";
    std::cin >> number;

    std::string numStr = std::to_string(number);
    std::cout << "Цифры числа справа налево: ";
    for (int i = numStr.length() - 1; i >= 0; --i) {
        std::cout << numStr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "Сумма цифр числа: " << sum << std::endl;

    return 0;
}



#include <iostream>

int main() {
    int N;
    std::cout << "Введите количество дней: ";
    std::cin >> N;

    int totalDistance = 15 + (N - 1) * 2;
    std::cout << "Общее расстояние, пройденное улиткой: " << totalDistance << " см" << std::endl;

    return 0;
}



#include <iostream>

int main() {
    int heads = 0, tails = 0;
    for (int i = 0; i < 9; ++i) {
        int coin;
        std::cout << "Введите 1 для орла или 0 для решки: ";
        std::cin >> coin;
        if (coin == 1) {
            heads++;
        }
        else {
            tails++;
        }
    }

    if (heads % 2 == 0) {
        std::cout << "Студент Д. принял решение в положительную сторону." << std::endl;
    }
    else {
        std::cout << "Студент Д. принял решение в отрицательную сторону." << std::endl;
    }

    return 0;
}




#include <iostream>
#include <iomanip>

int main() {
    int month, year;
    std::cout << "Введите номер месяца (1-12): ";
    std::cin >> month;
    std::cout << "Введите год: ";
    std::cin >> year;

    // Определение дня недели для первого дня месяца
    int dayOfWeek = (year + (year / 4) - (year / 100) + (year / 400) + (13 * month + 3) / 5) % 7;

    // Вывод календаря
    std::cout << "Пн Вт Ср Чт Пт Сб Вс" << std::endl;
    for (int i = 0; i < dayOfWeek; ++i) {
        std::cout << "   ";
    }

    int daysInMonth;
    switch (month) {
    case 2:
        daysInMonth = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28;
        break;
    case 4: case 6: case 9: case 11:
        daysInMonth = 30;
        break;
    default:
        daysInMonth = 31;
    }

    for (int day = 1; day <= daysInMonth; ++day) {
        std::cout << std::setw(3) << day;
        if ((day + dayOfWeek) % 7 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}