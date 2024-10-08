// Specification file for the inventory class.
#ifndef INVENTORY_H
#define INVENTORY_H

// Inventory class declaration

class Inventory
{
private:
	double totalCost;
	double cost;
	int quantity;
	int itemNumber;
public:
	Inventory();
	Inventory(int, int, double);
	void setItemNumber(int);
	void setQuantity(int);
	void setCost(double);
	void setTotalCost();
	int getItemNumber() const;
	int getQuantity() const;
	double getCost() const;
	double getTotalCost() const;
};
#endif
