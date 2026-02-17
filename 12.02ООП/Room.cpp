#include "Room.h"
#include <iostream>
using namespace std;

// Конструктор по умолчанию
Room::Room() : name(""), length(0), width(0), height(0), glueCeiling(false) {}

// Конструктор с параметрами
Room::Room(const string& n, double l, double w, double h, bool ceiling)
    : name(n), length(l), width(w), height(h), glueCeiling(ceiling) {
}

// Сеттеры
void Room::setName(const string& n) {
    name = n;
}

void Room::setLength(double l) {
    length = l;
}

void Room::setWidth(double w) {
    width = w;
}

void Room::setHeight(double h) {
    height = h;
}

void Room::setGlueCeiling(bool ceiling) {
    glueCeiling = ceiling;
}

// Площадь стен: периметр * высота
double Room::wallArea() const {
    return 2 * (length + width) * height;
}

// Площадь потолка
double Room::ceilingArea() const {
    return length * width;
}

// Общая площадь для оклейки
double Room::totalArea() const {
    double area = wallArea();
    if (glueCeiling) {
        area += ceilingArea();
    }
    return area;
}