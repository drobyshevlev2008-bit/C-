#ifndef APARTMENT_H
#define APARTMENT_H

#include "Room.h"
#include <vector>

class Apartment {
private:
    std::vector<Room> rooms;   // список комнат

public:
    // Конструктор по умолчанию
    Apartment();

    // Добавить комнату
    void addRoom(const Room& r);

    // Получить все комнаты
    const std::vector<Room>& getRooms() const;

    // Очистить список
    void clear();
};

#endif