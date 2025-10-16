#include <iostream>
#include <cctype>

int main() {
    char symbol;
    std::cin >> symbol;

    if (isalpha(symbol)) {
        std::cout << "Буква" << std::endl;
    }
    else if (isdigit(symbol)) {
        std::cout << "Цифра" << std::endl;
    }
    else if (ispunct(symbol)) {
        std::cout << "Знак препинания" << std::endl;
    }
    else {
        std::cout << "Другой символ" << std::endl;
    }

    return 0;
}



#include <iostream>

int main() {
    int duration;
    char operatorFrom, operatorTo;

    // Ввод данных
    std::cout << "Введите длительность разговора (в минутах): ";
    std::cin >> duration;
    std::cout << "Введите оператора, с которого звоните (M, B, T): ";
    std::cin >> operatorFrom;
    std::cout << "Введите оператора, на который звоните (M, B, T): ";
    std::cin >> operatorTo;

    // Определение стоимости разговора
    double cost = 0.0;
    if (operatorFrom == operatorTo) {
        cost = duration * 0.5; // Внутри сети
    }
    else {
        cost = duration * 1.0; // Между сетями
    }

    // Вывод результата
    std::cout << "Стоимость разговора: " << cost << " рублей." << std::endl;

    return 0;
}





