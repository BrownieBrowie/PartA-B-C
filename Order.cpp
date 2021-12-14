#include "Order.h"

void Order::addToCart(Register Store, std::string item)
{
	for (Inventory inCart : cart)
	{
		if (inCart.getnameofItem() == item)
		{
			Inventory OrderItem = Store.findItem(item);
			if (OrderItem.getamountofItem() - (inCart.getamountofItem() + 1) < 0)
			{
				std::cout << "Item is out of stock.\n";
				return;
			}
			else
			{
				int amount = inCart.getamountofItem() + 1;
					inCart.reStock(amount);
				return;
			}
		}
	}

	if (Store.itemInStore(item))
	{
		Inventory OrderItem = Store.findItem(item);
		OrderItem.reStock(1);
		cart.push_back(OrderItem);
		return;
	}
	else std::cout << "Item not found.\n";
}

double Order::getOrderPrice()
{
	double total = 0;
	for (Inventory item : cart)
	{
		total += (item.getPrice() * (double)item.getamountofItem());
	}
	return total;
}

void Order::purchaseOrder(Register Store)
{
	for (Inventory item : cart)
	{
		Store.purchaseUpdate(item);
	}
}

