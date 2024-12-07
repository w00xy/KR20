#pragma once

#include <iostream>
#include <string>

class Equipment {
private:
	std::string _name; 
	std::string _description;
	double _price;
	int _amount;

public:
	Equipment() = default; 
	Equipment(const std::string& name, const std::string& description, double price, int amount);
	virtual ~Equipment() = default;

	virtual void printDetails() const = 0;

	// Getters
	const std::string& getName() const { return _name; }
	const std::string& getDescription() const { return _description; }
	double getPrice() const { return _price; }
	int getAmount() const { return _amount; }

	// Setters
	void setName(const std::string& name) { _name = name; }
	void setDescription(const std::string& description) { _description = description; }
	void setPrice(double price) { _price = price; }
	void setAmount(int amount) { _amount = amount; }
};

