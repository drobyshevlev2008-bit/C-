#ifndef WALLPAPERROLL_H
#define WALLPAPERROLL_H

#include <string>

class WallpaperRoll {
private:
    std::string name;       // название обоев
    double width;           // ширина рулона (м)
    double length;          // длина рулона (м)
    double price;           // цена за рулон

public:
    // Конструкторы
    WallpaperRoll();
    WallpaperRoll(const std::string& n, double w, double l, double p);

    // Геттеры
    std::string getName() const { return name; }
    double getWidth() const { return width; }
    double getLength() const { return length; }
    double getPrice() const { return price; }

    // Сеттеры
    void setName(const std::string& n);
    void setWidth(double w);
    void setLength(double l);
    void setPrice(double p);

    // Площадь одного рулона
    double rollArea() const { return width * length; }
};

#endif