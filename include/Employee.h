#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(std::string name, int id, double salary);

    double calculatePay() const;
    void printPaySlip() const;

    std::string getName() const;
    int getId() const;

private:
    std::string name;
    int id;
    double salary;
};

#endif
