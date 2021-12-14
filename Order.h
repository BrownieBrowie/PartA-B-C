#pragma once
#include <vector>
#include <string>
#include "InventoryItem.h"
#include "CashRegister.h"


class Order {
private:
	std::vector<Inventory> cart;
public:
	void addToCart(Register, std::string);
	double getOrderPrice();
	void purchaseOrder(Register);
};