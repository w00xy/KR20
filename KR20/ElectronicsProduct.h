#pragma once

#include "Product.h"
#include <string>

class ElectronicsProduct : public Product {
private:
    std::string _manufacturer;
    std::string _warranty;

public:
    ElectronicsProduct(const std::string& name, const std::string& desc, double price, int amount,
        const std::string& manufacturer, const std::string& warranty);
    ~ElectronicsProduct() override = default;

    // Getters
    const std::string& getManufacturer() const { return _manufacturer; }
    const std::string& getWarranty() const { return _warranty; }

    //Setters (optional, depending on your needs)
    void setManufacturer(const std::string& manufacturer) { _manufacturer = manufacturer; }
    void setWarranty(const std::string& warranty) { _warranty = warranty; }

    void printDetails() const override;
};

