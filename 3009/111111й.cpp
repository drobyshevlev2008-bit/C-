#include <iostream>

int main() {
    int a;

    // Ввод значения a
    std::cout << "Введите значение a: ";
    std::cin >> a;

    // Проверка, чтобы a было меньше или равно 500
    if (a > 500) {
        std::cout << "Значение a должно быть меньше или равно 500." << std::endl;
        return 1;
    }

    // Вычисление суммы
    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    // Вывод результата
    std::cout << "Сумма чисел от " << a << " до 500 равна " << sum << std::endl;

    return 0;
}



#include <iostream>
#include <cmath> // Для функции pow()

int main() {
    int x, y;

    // Ввод чисел
    std::cout << "Введите число x: ";
    std::cin >> x;
    std::cout << "Введите число y: ";
    std::cin >> y;

    // Вычисление степени
    double result = pow(x, y);

    // Вывод результата
    std::cout << x << " в степени " << y << " равно " << result << std::endl;

    return 0;
}




#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 1000; ++i) {
        sum += i;
    }
    double average = static_cast<double>(sum) / 1000;
    std::cout << average << std::endl;
    return 0;
}







#include <iostream>

int main() {
    int a;

    // Ввод значения a
    std::cout << "Введите значение a (1 <= a <= 20): ";
    std::cin >> a;

    // Проверка, чтобы a было в диапазоне от 1 до 20
    if (a < 1 || a > 20) {
        std::cout << "Значение a должно быть в диапазоне от 1 до 20." << std::endl;
        return 1;
    }

    // Вычисление произведения
    long long product = 1;
    for (int i = a; i <= 20; ++i) {
        product *= i;
    }

    // Вывод результата
    std::cout << "Произведение чисел от " << a << " до 20 равно " << product << std::endl;

    return 0;
}