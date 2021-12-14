#pragma once
#include "InventoryItem.h"


class Register
{
private:
	std::vector<Inventory> numberofItems;
public:
	void addItem(Inventory);
	void takeStock();
	bool itemInStore(std::string);
	Inventory findItem(std::string);
	void purchaseUpdate(Inventory);
};
