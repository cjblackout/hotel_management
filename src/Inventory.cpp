#include "Inventory.h"
#include <iostream>

void Inventory::addItem(std::string item, int quantity) {
    items[item] += quantity;
    std::cout << "Added " << quantity << " of " << item << " to inventory." << std::endl;
}

void Inventory::removeItem(std::string item, int quantity) {
    if (items[item] >= quantity) {
        items[item] -= quantity;
        std::cout << "Removed " << quantity << " of " << item << " from inventory." << std::endl;
    } else {
        std::cout << "Not enough " << item << " in inventory to remove." << std::endl;
    }
}

int Inventory::getItemQuantity(std::string item) const {
    if (items.find(item) != items.end()) {
        return items.at(item);
    } else {
        return 0;
    }
}
