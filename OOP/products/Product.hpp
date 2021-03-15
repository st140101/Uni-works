#pragma once

class Product {
private:
	char* name;
	double price;
	unsigned int amount;
public:
	Product();
	Product(const char*);
	Product(const char*, double, unsigned int);
	~Product(); //destructor
	Product(const Product&); //copy

	const char* getName();
	double getPrice();
	unsigned int getAmount();

	void setName(const char*);
	void setPrice(const double);
	void setAmount(const unsigned int);
	void addAmount(const unsigned int);

	void printInfo();
};