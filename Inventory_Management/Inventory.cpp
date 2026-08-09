#include "Inventory.h"  
#include <iostream>		
#include <cstdlib>		

using namespace std;


Inventory::Inventory()
{
	itemNumber = 0;
	quantity = 0;
	cost = 0.0;
	totalCost = 0.0;
}


Inventory::Inventory(int item, int q, double c)
{
	if (item < 0 || q < 0 || c < 0)
	{
		cout << "Invalid input.\n";
		exit(EXIT_FAILURE);
	}

	itemNumber = item;
	quantity = q;
	cost = c;
	totalCost = quantity * cost;

}


void Inventory::setItemNumber(int item)
{
	if (item >= 0)
		itemNumber = item;
	else
	{
		cout << "Invalid number.\n";
		exit(EXIT_FAILURE);
	}
}


void Inventory::setQuantity(int q)
{
	if (q >= 0)
		quantity = q;
	else
	{
		cout << "Invalid quantity.\n";
		exit(EXIT_FAILURE);
	}
}


void Inventory::setCost(double c)
{
	if (c >= 0)
		cost = c;
	else
	{
		cout << "Invalid cost.\n";
		exit(EXIT_FAILURE);
	}
}


void Inventory::setTotalCost()
{
	totalCost = quantity * cost;
}


int Inventory::getItemNumber() const
{
	return itemNumber;
}


int Inventory::getQuantity() const
{
	return quantity;
}


double Inventory::getCost() const
{
	return cost;
}


double Inventory::getTotalCost() const
{
	return totalCost;
}