// Name: Jeremy Reed
// Class: CSC-220-51
// Assignment: Practice Program 1

// This program will use the inventory class, which is
// declared in Inventory.h file. The member Inventory
// class's member functions are defined in the 
// Inventory.cpp file. This program should be compiled
// with those files in a project.
#include <iostream>
#include "Inventory.h"
using namespace std;

int main()
{
	// Variables // Testing github
	Inventory inv;		// Define an instance of the Inventory class
	int itemNumber;		// Variable for itemNumber
	int quantity;		// Variable for quantity
	double cost;		// Variable for cost
	double totalCost;	// Variable for total cost


	system("cls");

	// Display member values with default constructor
	cout << "Object is initialized with values using the default constructor\n";
	cout << "The value of the members -----> \n";
	cout << "Item number: " << inv.getItemNumber() << endl;
	cout << "Quantity: " << inv.getQuantity() << endl;
	cout << "Cost: " << inv.getCost() << endl;
	inv.setTotalCost();
	cout << "Total Cost: " << inv.getTotalCost() << endl << endl;

	// Define an Inventory object and use the overloaded constructor
	Inventory inv2(777, 10, 12.50);

	// Display new member values
	cout << "Assign values to the object members using the overloaded constructor\n";
	cout << "The value of the members -----> \n";
	cout << "Item number: " << inv2.getItemNumber() << endl;
	cout << "Quantity: " << inv2.getQuantity() << endl;
	cout << "Cost: " << inv2.getCost() << endl;
	inv2.setTotalCost();
	cout << "Total Cost: " << inv2.getTotalCost() << endl << endl;

	// Use the mutator functions to change the member values.
	inv2.setItemNumber(555);
	inv2.setQuantity(20);
	inv2.setCost(19.95);
	inv2.setTotalCost();

	// Display the modified values.
	cout << "The values changed using mutators\n";
	cout << "The value of the members -----> \n";
	cout << "Item number: " << inv2.getItemNumber() << endl;
	cout << "Quantity: " << inv2.getQuantity() << endl;
	cout << "Cost: " << inv2.getCost() << endl;
	inv2.setTotalCost();
	cout << "Total Cost: " << inv2.getTotalCost() << endl << endl;


	cout << "Programmer Name: Jeremy Reed" << endl;
	system("pause");

	return 0;
}