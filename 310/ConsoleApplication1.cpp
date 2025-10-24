#include <iostream>
#include <string>

int main() {
    int choice;
    int number;

    while (true) {
        std::cout << "\nМеню:" << std::endl;
        std::cout << "1. Количество цифр" << std::endl;
        std::cout << "2. Сумма цифр" << std::endl;
        std::cout << "3. Среднее арифметическое цифр" << std::endl;
        std::cout << "4. Количество нулей" << std::endl;
        std::cout << "5. Выход" << std::endl;

        std::cout << "Выберите пункт меню (1-5): ";
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "До свидания!" << std::endl;
            break;
        }

        std::cout << "Введите число: ";
        std::cin >> number;

        switch (choice) {
        case 1:
            std::cout << "Количество цифр: " << std::to_string(number).length() << std::endl;
            break;
        case 2:
        {
            int sum = 0;
            for (char digit : std::to_string(number)) {
                sum += digit - '0';
            }
            std::cout << "Сумма цифр: " << sum << std::endl;
        }
        break;
        case 3:
        {
            int sum = 0;
            int count = 0;
            for (char digit : std::to_string(number)) {
                sum += digit - '0';
                count++;
            }
            std::cout << "Среднее арифметическое цифр: " << static_cast<double>(sum) / count << std::endl;
        }
        break;
        case 4:
        {
            int count = 0;
            for (char digit : std::to_string(number)) {
                if (digit == '0') {
                    count++;
                }
            }
            std::cout << "Количество нулей: " << count << std::endl;
        }
        break;
        default:
            std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
            break;
        }
    }

    return 0;
}