
#include <iostream>
#include "Inventory.h"
using namespace std;

int main()
{
	
	Inventory inv;		
	int itemNumber;		
	int quantity;		
	double cost;		
	double totalCost;	


	system("cls");

	// Display member values with default constructor
	cout << "Object is initialized with values using the default constructor\n";
	cout << "The value of the members -----> \n";
	cout << "Item number: " << inv.getItemNumber() << endl;
	cout << "Quantity: " << inv.getQuantity() << endl;
	cout << "Cost: " << inv.getCost() << endl;
	inv.setTotalCost();
	cout << "Total Cost: " << inv.getTotalCost() << endl << endl;

	// Use overloaded constructor
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