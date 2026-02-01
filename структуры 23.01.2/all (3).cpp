//1 
#include <iostream>

struct Rectangle {
    double width;
    double height;

    // Перемещение прямоугольника
    void move(double dx, double dy) {
        width += dx;
        height += dy;
    }

    // Изменение размера прямоугольника
    void resize(double newWidth, double newHeight) {
        width = newWidth;
        height = newHeight;
    }

    // Печать прямоугольника
    void print() const {
        std::cout << "Ширина: " << width << ", Высота: " << height << std::endl;
    }
};

int main() {
    Rectangle rect;
    rect.width = 5.0;
    rect.height = 3.0;

    std::cout << "Исходный прямоугольник: ";
    rect.print();

    rect.move(2.0, 1.0);
    std::cout << "После перемещения: ";
    rect.print();

    rect.resize(7.0, 4.0);
    std::cout << "После изменения размера: ";
    rect.print();

    return 0;
}
//2 
#include <iostream>
#include <cmath>

struct Point {
    double x;
    double y;

    // Конструктор
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    // Функция для вычисления расстояния между двумя точками
    static double distance(const Point& p1, const Point& p2) {
        return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
    }
};

int main() {
    Point p1(3.0, 4.0);
    Point p2(6.0, 8.0);

    double dist = Point::distance(p1, p2);
    std::cout << "Расстояние между точками: " << dist << std::endl;

    return 0;
}
//3 
#include <iostream>

struct Fraction {
    int numerator;
    int denominator;

    // Конструктор
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

    // Сокращение дроби
    void reduce() {
        int gcd = std::gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    // Перевод из неправильной дроби в простую
    void convertToMixed() {
        int whole = numerator / denominator;
        numerator %= denominator;
        std::cout << "Целая часть: " << whole << ", Дробная часть: " << numerator << "/" << denominator << std::endl;
    }

    // Арифметические операции
    Fraction operator+(const Fraction& other) const {
        return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
    }

    Fraction operator-(const Fraction& other) const {
        return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
    }

    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    Fraction operator/(const Fraction& other) const {
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }

    // Вывод дроби
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
        frac.reduce();
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(1, 2);

    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction prod = f1 * f2;
    Fraction quot = f1 / f2;

    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Разность: " << diff << std::endl;
    std::cout << "Произведение: " << prod << std::endl;
    std::cout << "Частное: " << quot << std::endl;

    f1.convertToMixed();

    return 0;
}