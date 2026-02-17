#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // для русского текста в консоли Windows

    cout << "=== Демонстрация работы с дробями ===\n\n";

    // Создаём две дроби
    Fraction a(1, 2); // 1/2
    Fraction b(2, 3); // 2/3

    cout << "Дробь A = ";
    a.output();
    cout << endl;

    cout << "Дробь B = ";
    b.output();
    cout << endl;

    // Сложение
    Fraction sum = a.add(b);
    cout << "A + B = ";
    sum.output();
    cout << endl;

    // Вычитание
    Fraction diff = a.subtract(b);
    cout << "A - B = ";
    diff.output();
    cout << endl;

    // Умножение
    Fraction prod = a.multiply(b);
    cout << "A * B = ";
    prod.output();
    cout << endl;

    // Деление
    Fraction quot = a.divide(b);
    cout << "A / B = ";
    quot.output();
    cout << endl;

    // Теперь введём свою дробь
    Fraction c;
    cout << "\nВведите свою дробь C:\n";
    c.input();

    cout << "Вы ввели: ";
    c.output();
    cout << endl;

    // Сложим A и C
    Fraction sum2 = a.add(c);
    cout << "A + C = ";
    sum2.output();
    cout << endl;

    return 0;
}