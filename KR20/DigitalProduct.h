#define DIGITALPRODUCT_H

#include "Product.h"
#include <string>

class DigitalProduct : public Product {
private:
    std::string _licenseKey;
    std::string _downloadLink;

public:
    DigitalProduct(const std::string& name, const std::string& desc, double price, int amount,
        const std::string& licenseKey, const std::string& downloadLink);
    ~DigitalProduct() override = default;

    // Getters
    const std::string& getLicenseKey() const { return _licenseKey; }
    const std::string& getDownloadLink() const { return _downloadLink; }

    // Setters (optional)
    void setLicenseKey(const std::string& licenseKey) { _licenseKey = licenseKey; }
    void setDownloadLink(const std::string& downloadLink) { _downloadLink = downloadLink; }

    void printDetails() const override;
};

