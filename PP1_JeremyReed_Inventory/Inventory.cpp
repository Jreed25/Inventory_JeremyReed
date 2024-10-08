// Implementation file for the Inventory class.
#include "Inventory.h"  // Needed for the Inventory class
#include <iostream>		// Needed for cout
#include <cstdlib>		// Needed for the exit function
using namespace std;

//****************************************************
// The constructor initializes all variables to 0.0. *
//****************************************************

Inventory::Inventory()
{
	itemNumber = 0.0;
	quantity = 0.0;
	cost = 0.0;
	totalCost = 0.0;
}

//**************************************************
// The overloaded constructor for Inventory class. *
//**************************************************
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
	

}

//***********************************************************
// setItemNumber sets the value of the variable itemNumber. *
//***********************************************************

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

//*******************************************************
// setQuantity sets the value of the variable quantity. *
//*******************************************************

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

//***********************************************
// setCost sets the value of the variable cost. *
//***********************************************

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

//********************************************************
// setTotalCost sets the value of the variable totalCost *
//********************************************************

void Inventory::setTotalCost()
{
	totalCost = quantity * cost;
}

//*********************************************************************
// getItemNumber returns the value in the member variable itemNumber. *
//*********************************************************************

int Inventory::getItemNumber() const
{
	return itemNumber;
}

//*****************************************************************
// getQuantity returns the value in the member variable quantity. *
//*****************************************************************

int Inventory::getQuantity() const
{
	return quantity;
}

//*********************************************************
// getCost returns the value in the member variable cost. *
//*********************************************************

double Inventory::getCost() const
{
	return cost;
}

//*******************************************************************
// getTotalCost returns the value in the member variable totalCost. *
//*******************************************************************

double Inventory::getTotalCost() const
{
	return totalCost;
}