#include "Point.h"
#include <iostream>
#include <fstream>   // для работы с файлами
#include <string>
#include "Poin.h"
using namespace std;

// Конструктор по умолчанию
Point::Point() : x(0.0), y(0.0), z(0.0) {}

// Конструктор с параметрами
Point::Point(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

// Ввод координат с клавиатуры
void Point::inputData() {
    cout << "Введите координату X: ";
    cin >> x;
    cout << "Введите координату Y: ";
    cin >> y;
    cout << "Введите координату Z: ";
    cin >> z;
}

// Вывод координат на экран
void Point::outputData() const {
    cout << "(" << x << ", " << y << ", " << z << ")";
}

// Сеттеры
void Point::setX(double xVal) {
    x = xVal;
}

void Point::setY(double yVal) {
    y = yVal;
}

void Point::setZ(double zVal) {
    z = zVal;
}

// Сохранение в файл
void Point::saveToFile(const string& filename) const {
    ofstream out(filename); // открываем файл для записи
    if (!out.is_open()) {
        cout << "Ошибка: не удалось открыть файл " << filename << " для записи.\n";
        return;
    }
    out << x << " " << y << " " << z; // записываем координаты через пробел
    out.close();
    cout << "Точка сохранена в файл " << filename << endl;
}

// Загрузка из файла
void Point::loadFromFile(const string& filename) {
    ifstream in(filename); // открываем файл для чтения
    if (!in.is_open()) {
        cout << "Ошибка: не удалось открыть файл " << filename << " для чтения.\n";
        return;
    }
    in >> x >> y >> z; // читаем три числа
    in.close();
    cout << "Точка загружена из файла " << filename << endl;
}