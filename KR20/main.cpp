#include <iostream>
#include "Product.h"
#include "FoodProduct.h"
#include "ElectronicsProduct.h"
#include "Employee.h"
#include "DigitalProduct.h"
#include "Equipment.h"
#include "Computer.h"
#include "Pallets.h"

int main() {
    FoodProduct apple("Apple", "Red and juicy apple", 1.0, 10, "2024-03-15", "Apples");
    ElectronicsProduct phone("Iphone 15", "Pro Max 256GB", 1000.0, 5, "Apple Japan", "1 year");

    //“ипа продали 4 €блока
    apple.sell(4);

    apple.printDetails();
    std::cout << std::endl;
    phone.printDetails();

    Employee emp1("Ivano Chervino", "12345", 60000.0, "Sales");
    Employee emp2("Karim EL-Kadri", "67890", 75000.0, "Coder VueJs");

    emp1.printDetails();
    std::cout << std::endl;
    emp2.printDetails();
    std::cout << std::endl;

    DigitalProduct windowsActivationKey("Windows Activation Key", "Fast Delivery. Easy to use", 15, 20, "GNU License", "https://google.drive/file/23213");
    windowsActivationKey.printDetails();

    //»спользование Equipment (Computer and Pallets)

    Computer computer1("Laptop", "High-performance laptop", 1200.00, 5, "Intel i7", "John Doe");
    Computer computer2("Desktop", "Powerful desktop computer", 1500.00, 3, "AMD Ryzen 9", "Jane Smith");

    computer1.printDetails();
    computer2.printDetails();

    Pallets pallets("Pallets", "Wooden 1x1m", 8, 40, "OOO Wooden details", "Apples");
    pallets.printDetails();

	return 0;
}