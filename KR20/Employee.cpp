#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& name, const std::string& id, double salary, const std::string& department) :
    _name(name), _id(id), _salary(salary), _department(department) {
    if (salary < 0) {
        throw std::invalid_argument("Salary cannot be negative.");
    }
}

void Employee::printDetails() const {
    std::cout << "Name: " << _name << std::endl;
    std::cout << "ID: " << _id << std::endl;
    std::cout << "Salary: " << _salary << std::endl;
    std::cout << "Department: " << _department << "\n______________________\n";
}

