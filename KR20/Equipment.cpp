#include "Equipment.h"

Equipment::Equipment(const std::string& name, const std::string& description, double price, int amount) :
    _name(name), _description(description), _price(price), _amount(amount) {
    // Add any additional initialization or validation logic here if needed.
    if (price < 0) {
        throw std::invalid_argument("Price cannot be negative.");
    }
    if (amount < 0) {
        throw std::invalid_argument("Amount cannot be negative.");
    }
}

