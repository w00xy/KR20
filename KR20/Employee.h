#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <stdexcept>


class Employee {
private:
    std::string _name;
    std::string _id;
    double _salary;
    std::string _department;

public:
    Employee(const std::string& name, const std::string& id, double salary, const std::string& department);
    void printDetails() const;

    // Getters
    const std::string& getName() const { return _name; }
    const std::string& getId() const { return _id; }
    double getSalary() const { return _salary; }
    const std::string& getDepartment() const { return _department; }

    // Setters (optional, but good practice)
    void setName(const std::string& name) { _name = name; }
    void setId(const std::string& id) { _id = id; }
    void setSalary(double salary) {
        if (salary < 0) {
            throw std::invalid_argument("Salary cannot be negative.");
        }
        _salary = salary;
    }
    void setDepartment(const std::string& department) { _department = department; }
};


