#include "DigitalProduct.h"
#include <iostream>

DigitalProduct::DigitalProduct(const std::string& name, const std::string& desc, double price, int amount,
    const std::string& licenseKey, const std::string& downloadLink) :
    Product(name, desc, price, amount), _licenseKey(licenseKey), _downloadLink(downloadLink) {}


void DigitalProduct::printDetails() const {
    Product::printDetails();
    std::cout << "License Key: " << _licenseKey << std::endl;
    std::cout << "Download Link: " << _downloadLink << "\n______________________\n";
}

