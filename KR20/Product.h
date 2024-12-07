#pragma once

#include <string>

class Product {
private:
	std::string _name;
	std::string _desc;
	double _price;
	int _amount;
public:
	Product(const std::string& name, const std::string& desc, double price, int amount); 
	virtual ~Product() = default; 

	// Getters
	const std::string& getName() const { return _name; }
	const std::string& getDesc() const { return _desc; }
	double getPrice() const { return _price; }
	int getAmount() const { return _amount; }


	//Setters 
	void setName(const std::string& name) { _name = name; }
	void setDesc(const std::string& desc) { _desc = desc; }
	void setPrice(double price) { _price = price; }
	void setAmount(int amount) { _amount = amount; }


	virtual void printDetails() const = 0;

};