#ifndef POINT_H
#define POINT_H

#include <string>

class Point {
private:
    double x;
    double y;
    double z;

public:
    // Конструкторы
    Point();                         // по умолчанию (0,0,0)
    Point(double xVal, double yVal, double zVal); // с параметрами

    // Методы ввода/вывода
    void inputData();                // ввод координат с клавиатуры
    void outputData() const;         // вывод координат на экран

    // Аксессоры (геттеры) – inline
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

    // Аксессоры (сеттеры)
    void setX(double xVal);
    void setY(double yVal);
    void setZ(double zVal);

    // Работа с файлами
    void saveToFile(const std::string& filename) const;   // сохранить точку в файл
    void loadFromFile(const std::string& filename);       // загрузить точку из файла
};

#endif