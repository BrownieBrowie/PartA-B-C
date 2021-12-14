//Code created by Bouraoui Elfeghih
#include "InventoryItem.h"

Inventory::Inventory()
{
	this -> nameofItem = "";
	this -> amountofItem = 0;
	this -> priceofItem = 0.0;
}
Inventory::Inventory(std::string nameofI, long id, int amountofI, double priceofI)
{
	this -> nameofItem = nameofI;
	this->id = id;
	this -> amountofItem = amountofI;
	this -> priceofItem = priceofI;
}
std::string Inventory::getnameofItem() { return nameofItem; }
long Inventory::getId() { return id; }
int Inventory::getamountofItem() { return amountofItem; }
double Inventory::getPrice() { return priceofItem; }
double Inventory::getTotal() { return(getPrice() * getamountofItem()); }
void Inventory::reStock(int someNumber) { this -> amountofItem = someNumber; }
void Inventory::printtheDeets()
{
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << std::left << std::setw(15) << nameofItem << std::left << std::setw(5) << amountofItem << std::left << std::setw(1) << getTotal() << std::endl;
}
