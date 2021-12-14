#include "CashRegister.h"

void Register::addItem(Inventory toAdd)
{
    for (Inventory item : numberofItems)
    {
        if (item.getnameofItem() == toAdd.getnameofItem())
        {
            item.reStock(item.getamountofItem() + toAdd.getamountofItem());
            return;
        }
    }
    numberofItems.push_back(toAdd);
}

void Register::takeStock()
{
    std::cout << "Store:\n";
    for (Inventory item : numberofItems)
    {
        std::cout << item.getnameofItem() << " x " << item.getamountofItem() << std::endl;
    }
}

bool Register::itemInStore(std::string search)
{
    for (Inventory item : numberofItems)
    {
        if (item.getnameofItem() == search)
            return true;
    }
    return false;
}

Inventory Register::findItem(std::string search)
{
    for (Inventory item : numberofItems)
    {
        if (item.getnameofItem() == search)
            return item;
    }
}

void Register::purchaseUpdate(Inventory purchased)
{
    for (Inventory item : numberofItems)
    {
        if (purchased.getnameofItem() == item.getnameofItem())
        {
            item.reStock(item.getamountofItem() - purchased.getamountofItem());
            break;
        }
    }
}