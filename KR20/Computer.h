#pragma once

#define COMPUTER_H

#include "Equipment.h"
#include <string>

class Computer : public Equipment {
private:
    std::string _processor;
    std::string _admin;

public:
    Computer(const std::string& name, const std::string& description, double price, int amount,
        const std::string& processor, const std::string& admin) :
        Equipment(name, description, price, amount), _processor(processor), _admin(admin) {}

    void printDetails() const override {
        std::cout << "Computer Details:\n";
        std::cout << "Name: " << getName() << "\n";
        std::cout << "Description: " << getDescription() << "\n";
        std::cout << "Price: " << getPrice() << "\n";
        std::cout << "Amount: " << getAmount() << "\n";
        std::cout << "Processor: " << _processor << "\n"; 
        std::cout << "Admin: " << _admin << "\n______________________\n";
    }
  
};

