#include "Fraction.h"
#include <iostream>
using namespace std;

// Конструктор по умолчанию
Fraction::Fraction() : numerator(0), denominator(1) {}

// Конструктор с параметрами
Fraction::Fraction(int num, int denom) {
    setNumerator(num);
    setDenominator(denom); // проверка знаменателя внутри
}

// Сеттер для числителя
void Fraction::setNumerator(int num) {
    numerator = num;
}

// Сеттер для знаменателя (если 0 – заменяем на 1)
void Fraction::setDenominator(int denom) {
    if (denom != 0)
        denominator = denom;
    else {
        cout << "Знаменатель не может быть нулём. Устанавливаю 1.\n";
        denominator = 1;
    }
}

// Ввод дроби с клавиатуры
void Fraction::input() {
    cout << "Введите числитель: ";
    cin >> numerator;
    cout << "Введите знаменатель: ";
    int d;
    cin >> d;
    setDenominator(d);
}

// Вывод дроби на экран
void Fraction::output() const {
    cout << numerator << "/" << denominator;
}

// Сложение
Fraction Fraction::add(const Fraction& other) const {
    int new_num = numerator * other.denominator + other.numerator * denominator;
    int new_den = denominator * other.denominator;
    return Fraction(new_num, new_den);
}

// Вычитание
Fraction Fraction::subtract(const Fraction& other) const {
    int new_num = numerator * other.denominator - other.numerator * denominator;
    int new_den = denominator * other.denominator;
    return Fraction(new_num, new_den);
}

// Умножение
Fraction Fraction::multiply(const Fraction& other) const {
    int new_num = numerator * other.numerator;
    int new_den = denominator * other.denominator;
    return Fraction(new_num, new_den);
}

// Деление (проверяем, что вторая дробь не нулевая)
Fraction Fraction::divide(const Fraction& other) const {
    // Деление a/b : c/d = a*d / b*c
    int new_num = numerator * other.denominator;
    int new_den = denominator * other.numerator;
    if (new_den == 0) {
        cout << "Ошибка: деление на ноль! Возвращаю 0/1.\n";
        return Fraction(0, 1);
    }
    return Fraction(new_num, new_den);
}