#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

class Inventory
{
private:
	std::string nameofItem;
	long id;
	int amountofItem;
	double priceofItem;
public:
	Inventory();
	Inventory(std::string, long, int, double);
	std::string getnameofItem();
	long getId();
	int getamountofItem();
	double getPrice();
	double getTotal();
	void reStock(int);
	void printtheDeets();
};
