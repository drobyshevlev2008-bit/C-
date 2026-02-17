#include <iostream>
#include <vector>
#include <string>
#include <cmath>      // для ceil
#include "Apartment.h"
#include "Room.h"
#include "WallpaperRoll.h"

using namespace std;

// Функция для ввода числа с проверкой (чтобы не было отрицательных)
double inputPositive(const string& prompt) {
    double value;
    do {
        cout << prompt;
        cin >> value;
        if (value <= 0) {
            cout << "Значение должно быть положительным. Повторите ввод.\n";
        }
    } while (value <= 0);
    return value;
}

int main() {
    setlocale(LC_ALL, "Russian"); // для поддержки русского языка (Windows)

    cout << "=== Программа расчёта стоимости обоев ===\n\n";

    // 1. Ввод количества комнат
    int roomCount;
    do {
        cout << "Введите количество комнат: ";
        cin >> roomCount;
        if (roomCount <= 0) {
            cout << "Количество комнат должно быть больше 0.\n";
        }
    } while (roomCount <= 0);

    Apartment apt;  // создаём квартиру

    // 2. Ввод параметров каждой комнаты
    for (int i = 0; i < roomCount; ++i) {
        cout << "\n--- Комната " << i + 1 << " ---\n";
        cin.ignore(); // очищаем буфер после предыдущего ввода числа

        string name;
        cout << "Название комнаты: ";
        getline(cin, name);

        double length = inputPositive("Длина (м): ");
        double width = inputPositive("Ширина (м): ");
        double height = inputPositive("Высота (м): ");

        char answer;
        cout << "Клеить потолок? (y/n): ";
        cin >> answer;
        bool glueCeiling = (answer == 'y' || answer == 'Y');

        Room room(name, length, width, height, glueCeiling);
        apt.addRoom(room);
    }

    // 3. Ввод видов обоев
    int wallpaperCount;
    do {
        cout << "\nВведите количество видов обоев: ";
        cin >> wallpaperCount;
        if (wallpaperCount <= 0) {
            cout << "Количество видов обоев должно быть больше 0.\n";
        }
    } while (wallpaperCount <= 0);

    vector<WallpaperRoll> wallpapers;

    for (int i = 0; i < wallpaperCount; ++i) {
        cout << "\n--- Вид обоев " << i + 1 << " ---\n";
        cin.ignore();

        string name;
        cout << "Название обоев: ";
        getline(cin, name);

        double width = inputPositive("Ширина рулона (м): ");
        double length = inputPositive("Длина рулона (м): ");
        double price = inputPositive("Цена за рулон (руб): ");

        WallpaperRoll wp(name, width, length, price);
        wallpapers.push_back(wp);
    }

    // 4. Для каждой комнаты выбираем вид обоев
    // Будем хранить для каждой комнаты индекс выбранных обоев
    vector<int> roomWallpaperIndex(roomCount);

    cout << "\n--- Выбор обоев для каждой комнаты ---\n";
    for (size_t i = 0; i < apt.getRooms().size(); ++i) {
        const Room& r = apt.getRooms()[i];
        cout << "\nКомната \"" << r.getName() << "\". Доступные виды обоев:\n";
        for (size_t j = 0; j < wallpapers.size(); ++j) {
            cout << j + 1 << ". " << wallpapers[j].getName()
                << " (ширина " << wallpapers[j].getWidth()
                << " м, длина " << wallpapers[j].getLength()
                << " м, цена " << wallpapers[j].getPrice() << " руб.)\n";
        }

        int choice;
        do {
            cout << "Выберите номер вида обоев для этой комнаты: ";
            cin >> choice;
            if (choice < 1 || choice >(int)wallpapers.size()) {
                cout << "Неверный номер. Повторите.\n";
            }
        } while (choice < 1 || choice >(int)wallpapers.size());
        roomWallpaperIndex[i] = choice - 1; // индекс с 0
    }

    // 5. Расчёт необходимого количества рулонов каждого вида
    vector<double> totalAreaPerType(wallpapers.size(), 0.0);

    for (size_t i = 0; i < apt.getRooms().size(); ++i) {
        const Room& r = apt.getRooms()[i];
        int wpIndex = roomWallpaperIndex[i];
        totalAreaPerType[wpIndex] += r.totalArea();
    }

    vector<int> rollsNeeded(wallpapers.size(), 0);
    double totalCost = 0.0;

    cout << "\n=== РЕЗУЛЬТАТ ===\n";
    for (size_t i = 0; i < wallpapers.size(); ++i) {
        if (totalAreaPerType[i] > 0) {
            double rollArea = wallpapers[i].rollArea();
            // округление вверх
            int rolls = static_cast<int>(ceil(totalAreaPerType[i] / rollArea));
            rollsNeeded[i] = rolls;
            double cost = rolls * wallpapers[i].getPrice();
            totalCost += cost;

            cout << "Обои \"" << wallpapers[i].getName() << "\":\n";
            cout << "  Общая площадь оклейки: " << totalAreaPerType[i] << " кв. м\n";
            cout << "  Площадь одного рулона: " << rollArea << " кв. м\n";
            cout << "  Требуется рулонов: " << rolls << "\n";
            cout << "  Стоимость: " << cost << " руб.\n\n";
        }
        else {
            cout << "Обои \"" << wallpapers[i].getName() << "\" не используются.\n";
        }
    }

    cout << "------------------------------------\n";
    cout << "ОБЩАЯ СТОИМОСТЬ ЗАКУПКИ: " << totalCost << " руб.\n";

    return 0;
}