#pragma once

#define PALLETS_H

#include "Equipment.h"
#include <string>

class Pallets : public Equipment {
private:
    std::string _postavshik;
    std::string _usage;

public:
    Pallets(const std::string& name, const std::string& description, double price, int amount,
        const std::string& postavshik, const std::string& usage) :
        Equipment(name, description, price, amount), _postavshik(postavshik), _usage(usage) {}

    void printDetails() const override {
        std::cout << "Computer Details:\n";
        std::cout << "Name: " << getName() << "\n";
        std::cout << "Description: " << getDescription() << "\n";
        std::cout << "Price: " << getPrice() << "\n";
        std::cout << "Amount: " << getAmount() << "\n";
        std::cout << "Amount: " << _usage << "\n";
        std::cout << "Postavshik: " << _postavshik << "\n______________________\n";
    }

};

