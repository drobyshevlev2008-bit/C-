#include "Apartment.h"

Apartment::Apartment() {}

void Apartment::addRoom(const Room& r) {
    rooms.push_back(r);
}

const std::vector<Room>& Apartment::getRooms() const {
    return rooms;
}

void Apartment::clear() {
    rooms.clear();
}