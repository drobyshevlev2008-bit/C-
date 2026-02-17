#include "Point.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "=== Тестирование класса Point ===\n\n";

    // Создаём точку с помощью конструктора
    Point p1(1.5, -2.3, 4.7);
    cout << "Точка p1 (задана конструктором): ";
    p1.outputData();
    cout << endl;

    // Создаём вторую точку и вводим её координаты с клавиатуры
    Point p2;
    cout << "\nВведите координаты для p2:\n";
    p2.inputData();

    cout << "Точка p2: ";
    p2.outputData();
    cout << endl;

    // Используем сеттеры, чтобы изменить координаты p1
    cout << "\nИзменяем координаты p1 через сеттеры:\n";
    p1.setX(10.0);
    p1.setY(20.0);
    p1.setZ(30.0);
    cout << "Теперь p1: ";
    p1.outputData();
    cout << endl;

    // Сохраняем p1 в файл
    string filename = "point.txt";
    p1.saveToFile(filename);

    // Создаём новую точку p3 и загружаем в неё данные из файла
    Point p3;
    p3.loadFromFile(filename);
    cout << "\nЗагруженная точка p3 из файла: ";
    p3.outputData();
    cout << endl;

    return 0;
}