# Inventory Management System

A C++ inventory management program demonstrating object-oriented programming and basic inventory data management. The program creates inventory objects, validates input, updates item information, and calculates total inventory cost.

## Features

* Create inventory items using default or parameterized constructors
* Store item number, quantity, and cost
* Update inventory data using setter methods
* Validate inventory values
* Calculate total inventory cost

## Concepts Demonstrated

* Object-oriented programming
* Classes and objects
* Encapsulation
* Constructors and overloaded constructors
* Getters and setters
* Input validation
* Separation of interface and implementation using `.h` and `.cpp` files

## Project Structure

```text
Inventory_Management/
├── main.cpp
├── Inventory.cpp
└── Inventory.h
```

## How to Run

Compile the program with:

```bash
g++ main.cpp Inventory.cpp -o main
```

Run it with:

```bash
./main
```

## Example

```text
Default constructor:
Item number: 0
Quantity: 0
Cost: 0
Total Cost: 0

Parameterized constructor:
Item number: 777
Quantity: 10
Cost: 12.5
Total Cost: 125

After updating values:
Item number: 555
Quantity: 20
Cost: 19.95
Total Cost: 399
```

## Author

Jeremy Reed

