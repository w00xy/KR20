#include "ElectronicsProduct.h"
#include <iostream>

ElectronicsProduct::ElectronicsProduct(const std::string& name, const std::string& desc, double price, int amount,
    const std::string& manufacturer, const std::string& warranty) :
    Product(name, desc, price, amount), _manufacturer(manufacturer), _warranty(warranty) {}


void ElectronicsProduct::printDetails() const {
    Product::printDetails(); // Call the base class's printDetails()
    std::cout << "Manufacturer: " << _manufacturer << std::endl;
    std::cout << "Warranty: " << _warranty << "\n______________________\n";
}

