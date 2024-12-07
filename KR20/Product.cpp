#include "Product.h"
#include <iostream>
#include <stdexcept>


Product::Product(const std::string& name, const std::string& desc, double price, int amount) :
    _name(name), _desc(desc), _price(price), _amount(amount) {
    if (price < 0) {
        throw std::invalid_argument("Price cannot be negative.");
    }
    if (amount < 0) {
        throw std::invalid_argument("Amount cannot be negative.");
    }
}


void Product::printDetails() const {
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Description: " << _desc << std::endl;
    std::cout << "Price: " << _price << std::endl;
    std::cout << "Amount: " << _amount << "\n______________________\n";
}