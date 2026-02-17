#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {
private:
    std::string name;       // название комнаты
    double length;          // длина
    double width;           // ширина
    double height;          // высота
    bool glueCeiling;       // клеить потолок?

public:
    // Конструкторы
    Room();
    Room(const std::string& n, double l, double w, double h, bool ceiling);

    // Геттеры
    std::string getName() const { return name; }
    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
    bool isGlueCeiling() const { return glueCeiling; }

    // Сеттеры
    void setName(const std::string& n);
    void setLength(double l);
    void setWidth(double w);
    void setHeight(double h);
    void setGlueCeiling(bool ceiling);

    // Методы для вычисления площадей
    double wallArea() const;          // площадь стен
    double ceilingArea() const;       // площадь потолка
    double totalArea() const;         // общая площадь для оклейки
};

#endif