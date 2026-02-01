#include <iostream>

// Нахождение меньшего из двух чисел
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// Нахождение большего из двух чисел
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Возведение числа в квадрат
#define SQUARE(x) ((x) * (x))

// Возведение числа в степень
#define POWER(x, n) ((x) * (x) * (x) * ... * (x)) // n раз

// Проверка числа на четность
#define IS_EVEN(x) ((x) % 2 == 0)

// Проверка числа на нечетность
#define IS_ODD(x) ((x) % 2 != 0)

int main() {
    int a = 10;
    int b = 20;

    std::cout << "Меньшее число: " << MIN(a, b) << std::endl;
    std::cout << "Большее число: " << MAX(a, b) << std::endl;
    std::cout << "Квадрат числа " << a << ": " << SQUARE(a) << std::endl;

    int n = 3;
    std::cout << "Число " << a << " в степени " << n << ": " << POWER(a, n) << std::endl;

    int x = 15;
    if (IS_EVEN(x)) {
        std::cout << x << " - четное число" << std::endl;
    } else {
        std::cout << x << " - нечетное число" << std::endl;
    }

    if (IS_ODD(x)) {
        std::cout << x << " - нечетное число" << std::endl;
    } else {
        std::cout << x << " - четное число" << std::endl;
    }

    return 0;
}