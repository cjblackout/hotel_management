# HotelManagement

## Overview

HotelManagement is a comprehensive C++ application designed to manage hotel guest information, inventory, and employee payroll. This application utilizes object-oriented programming principles to provide a modular and scalable solution for hotel management. Additionally, the application includes a web-based GUI developed using Wt, a C++ library for developing web applications, allowing for easy interaction through a web browser.

## Directory Structure

```
HotelManagement/
│
├── include/
│   ├── Guest.h
│   ├── Inventory.h
│   ├── Employee.h
│   └── WtApp.h
│
├── src/
│   ├── Guest.cpp
│   ├── Inventory.cpp
│   ├── Employee.cpp
│   └── WtApp.cpp
│
├── obj/
│   └── (compiled object files)
│
├── bin/
│   └── HotelManagement (executable)
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

### WtApp
Handles the web application using Wt framework.

- **Methods:**
  - `setupUI()`: Sets up the user interface for the web application.
  - `createGuestSection()`: Creates the guest management section.
  - `createInventorySection()`: Creates the inventory management section.
  - `createEmployeeSection()`: Creates the employee management section.

## Compilation and Execution

### Prerequisites
- C++ Compiler (g++)
- Make
- Wt Library

### Installation of Wt Library
Follow the instructions on the [Wt website](https://www.webtoolkit.eu/wt/download) to install the Wt library on your system.

### Compilation

Use the provided Makefile to compile the project. In the terminal, navigate to the project directory and run:

```bash
make
```

### Execution

After compilation, run the executable:

```bash
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
./bin/HotelManagement --docroot . --http-address 0.0.0.0 --http-port 8080
```

## Usage

Upon running the application, open a web browser and navigate to `http://0.0.0.0:8080`. You will be presented with a web interface to interact with the system. Follow the on-screen instructions to manage guests, inventory, and employees.

## Contributing

Feel free to fork this repository, make changes, and submit pull requests. Contributions are welcome!

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Contact

For questions or issues, please open an issue on GitHub or contact the project maintainer.

---

By following this README, you should be able to set up and run the HotelManagement application, and use its features through a web interface provided by the Wt framework. If you encounter any issues, refer to the detailed steps and ensure all dependencies are correctly installed.