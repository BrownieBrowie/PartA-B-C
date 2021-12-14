//Code created by Bouraoui Elfeghih
#include "../CashRegister.h"
#include <iostream>
#include "../Order.h"

int main() {
	Register CashRegister;
	CashRegister.addItem(Inventory("Book", 301, 12, 2.99));
	CashRegister.addItem(Inventory("Colored Pencils", 302, 15, 1.99));
	CashRegister.addItem(Inventory("Coloring Paper", 303, 20, 5.00));
	CashRegister.addItem(Inventory("Markers", 304, 50, 1.75));
	CashRegister.addItem(Inventory("Crayons", 305, 3, .50));
	CashRegister.addItem(Inventory("Staples", 306, 7, .25));
	CashRegister.takeStock();

	Order Receipt;
	Receipt.addToCart(CashRegister, "Pencil");
	Receipt.addToCart(CashRegister, "Book");
	Receipt.addToCart(CashRegister, "Colored Pencils");
	std::cout << "Total Price: " << Receipt.getOrderPrice();

	return 0;
}
