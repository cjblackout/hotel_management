# HotelManagement

## Overview

HotelManagement is a comprehensive C++ application designed to manage hotel guest information, inventory, and employee payroll. This application utilizes object-oriented programming principles to provide a modular and scalable solution for hotel management.

## Directory Structure

```
HotelManagement/
│
├── include/
│   ├── Guest.h
│   ├── Inventory.h
│   └── Employee.h
│
├── src/
│   ├── Guest.cpp
│   ├── Inventory.cpp
│   └── Employee.cpp
│
├── main.cpp
├── Makefile
└── README.md
```

## Class Descriptions

### Guest
Handles guest-related information and operations.

- **Attributes:**
  - `name` (string): Name of the guest
  - `roomNumber` (int): Room number assigned to the guest
  - `durationOfStay` (int): Duration of the stay in days
  - `billAmount` (double): Total bill amount for the stay

- **Methods:**
  - `checkIn()`: Checks in a guest
  - `checkOut()`: Checks out a guest
  - `generateBill()`: Generates the bill for the guest

### Inventory
Manages the hotel's inventory.

- **Attributes:**
  - `itemName` (string): Name of the inventory item
  - `quantity` (int): Quantity of the item in stock
  - `price` (double): Price per unit of the item

- **Methods:**
  - `addItem()`: Adds an item to the inventory
  - `removeItem()`: Removes an item from the inventory
  - `updateItem()`: Updates the quantity or price of an item
  - `listItems()`: Lists all inventory items

### Employee
Handles employee-related information and operations.

- **Attributes:**
  - `name` (string): Name of the employee
  - `id` (int): Employee ID
  - `position` (string): Job position of the employee
  - `salary` (double): Salary of the employee

- **Methods:**
  - `addEmployee()`: Adds a new employee
  - `removeEmployee()`: Removes an employee
  - `updateEmployee()`: Updates employee information
  - `generatePaySlip()`: Generates the payslip for the employee

## Compilation and Execution

### Prerequisites
- C++ Compiler (g++)
- Make

### Compilation

Use the provided Makefile to compile the project. In the terminal, navigate to the project directory and run:

```bash
make
```

### Execution

After compilation, run the executable:

```bash
./HotelManagement
```

## Usage

Upon running the application, you will be prompted to interact with the system. Follow the on-screen instructions to manage guests, inventory, and employees.

## Contributing

Feel free to fork this repository, make changes, and submit pull requests. Contributions are welcome!

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Contact

For questions or issues, please open an issue on GitHub or contact the project maintainer.