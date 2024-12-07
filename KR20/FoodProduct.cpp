#include "FoodProduct.h"
#include <iostream>

FoodProduct::FoodProduct(const std::string& name, const std::string& desc, double price, int amount,
    const std::string& expiryDate, const std::string& ingredients) :
    Product(name, desc, price, amount), _expiryDate(expiryDate), _ingredients(ingredients) {}


void FoodProduct::printDetails() const {
    Product::printDetails();
    std::cout << "Expiry Date: " << _expiryDate << std::endl;
    std::cout << "Ingredients: " << _ingredients << "\n______________________\n";
}

