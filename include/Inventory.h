#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <unordered_map>

class Inventory {
public:
    void addItem(std::string item, int quantity);
    void removeItem(std::string item, int quantity);
    int getItemQuantity(std::string item) const;

private:
    std::unordered_map<std::string, int> items;
};

#endif
