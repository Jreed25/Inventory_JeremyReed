#include <iostream>
#include "Inventory.h"

using namespace std;

int main()
{
	
	Inventory inv;		


	// Test default constructor
	cout << "Default constructor:\n";
	cout << "Item number: " << inv.getItemNumber() << endl;
	cout << "Quantity: " << inv.getQuantity() << endl;
	cout << "Cost: " << inv.getCost() << endl;

	inv.setTotalCost();
	cout << "Total Cost: " << inv.getTotalCost() << endl << endl;

	// Test the parameterized constructor
	Inventory inv2(777, 10, 12.50);

	cout << "Parameterized constructor:\n";
	cout << "Item number: " << inv2.getItemNumber() << endl;
	cout << "Quantity: " << inv2.getQuantity() << endl;
	cout << "Cost: " << inv2.getCost() << endl;

	inv2.setTotalCost();
	cout << "Total Cost: " << inv2.getTotalCost() << endl << endl;

	// Test the setter functions
	inv2.setItemNumber(555);
	inv2.setQuantity(20);
	inv2.setCost(19.95);
	inv2.setTotalCost();

	cout << "After updating values:\n";
	cout << "Item number: " << inv2.getItemNumber() << endl;
	cout << "Quantity: " << inv2.getQuantity() << endl;
	cout << "Cost: " << inv2.getCost() << endl;
	cout << "Total Cost: " << inv2.getTotalCost() << endl << endl;


	return 0;
}