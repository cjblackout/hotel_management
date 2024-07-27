#include "Guest.h"
#include <iostream>

Guest::Guest(std::string name, int id, int roomNumber)
    : name(name), id(id), roomNumber(roomNumber), isCheckedIn(false) {}

void Guest::checkIn() {
    isCheckedIn = true;
    std::cout << name << " checked in to room " << roomNumber << std::endl;
}

void Guest::checkOut() {
    isCheckedIn = false;
    std::cout << name << " checked out from room " << roomNumber << std::endl;
}

std::string Guest::getName() const {
    return name;
}

int Guest::getId() const {
    return id;
}

int Guest::getRoomNumber() const {
    return roomNumber;
}
