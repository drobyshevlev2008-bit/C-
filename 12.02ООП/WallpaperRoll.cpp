#include "WallpaperRoll.h"

// Конструктор по умолчанию
WallpaperRoll::WallpaperRoll() : name(""), width(0), length(0), price(0) {}

// Конструктор с параметрами
WallpaperRoll::WallpaperRoll(const std::string& n, double w, double l, double p)
    : name(n), width(w), length(l), price(p) {
}

// Сеттеры
void WallpaperRoll::setName(const std::string& n) {
    name = n;
}

void WallpaperRoll::setWidth(double w) {
    width = w;
}

void WallpaperRoll::setLength(double l) {
    length = l;
}

void WallpaperRoll::setPrice(double p) {
    price = p;
}