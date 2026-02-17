#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int numerator;   // числитель
    int denominator; // знаменатель

public:
    // Конструкторы
    Fraction();                      // по умолчанию (0/1)
    Fraction(int num, int denom);    // с параметрами

    // Методы для ввода/вывода
    void input();                    // ввод с клавиатуры
    void output() const;             // вывод на экран

    // Арифметические операции (возвращают новую дробь)
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;

    // Геттеры (доступ к числителю и знаменателю)
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    // Сеттеры (с проверкой знаменателя)
    void setNumerator(int num);
    void setDenominator(int denom); // если denom == 0, заменяет на 1
};

#endif