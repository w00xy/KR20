#pragma once

#include "Product.h"
#include <string>


class FoodProduct : public Product {
private:
    std::string _expiryDate;
    std::string _ingredients;

public:
    FoodProduct(const std::string& name, const std::string& desc, double price, int amount,
        const std::string& expiryDate, const std::string& ingredients);
    ~FoodProduct() override = default;

    // Getters
    const std::string& getExpiryDate() const { return _expiryDate; }
    const std::string& getIngredients() const { return _ingredients; }


    //Setters (optional, depending on your needs)
    void setExpiryDate(const std::string& expiryDate) { _expiryDate = expiryDate; }
    void setIngredients(const std::string& ingredients) { _ingredients = ingredients; }

    void sell(int amount) {
        if (amount <= this->getAmount()) {
            int new_amount = this->getAmount() - amount;
            this->setAmount(new_amount);
        }
    }

    void printDetails() const override;
};