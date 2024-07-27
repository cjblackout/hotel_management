#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, int id, double salary)
    : name(name), id(id), salary(salary) {}

double Employee::calculatePay() const {
    return salary; // Assuming monthly salary for simplicity
}

void Employee::printPaySlip() const {
    std::cout << "Pay Slip for " << name << " (ID: " << id << ")\n"
              << "Salary: $" << salary << std::endl;
}

std::string Employee::getName() const {
    return name;
}

int Employee::getId() const {
    return id;
}
