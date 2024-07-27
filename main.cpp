#include <iostream>
#include "Guest.h"
#include "Inventory.h"
#include "Employee.h"

int main() {
    // Guest Management
    Guest guest1("John Doe", 1, 101);
    guest1.checkIn();
    guest1.checkOut();

    // Inventory Management
    Inventory inventory;
    inventory.addItem("Towel", 50);
    inventory.removeItem("Towel", 5);
    std::cout << "Towel count: " << inventory.getItemQuantity("Towel") << std::endl;

    // Employee Management and Payslip
    Employee employee1("Jane Smith", 1, 3000.0);
    employee1.printPaySlip();

    return 0;
}
