#include "Product.hpp"
#include <cstring>
#include <iostream>
#pragma warning(disable : 4996)

Product::Product() {
	name = new char[1];
	strcpy(name, "");
	price = 0.0;
	amount = 0;
}

Product::Product(const char* name) {
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
	price = 0.0;
	amount = 0;
}

Product::Product(const char* name, double price, unsigned int amount) {
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
	this->price = price;
	this->amount = amount;
}

Product::~Product() {
	delete[] name;
}

Product::Product(const Product& rhs) {
	name = new char[strlen(rhs.name)+1];
	strcpy(name, rhs.name);
	price = rhs.price;
	amount = rhs.amount;
}

const char* Product::getName() const {
	return name;
}

double Product::getPrice() const {
	return price;
}

unsigned int Product::getAmount() const {
	return amount;
}

void Product::setName(const char* newName) {
	delete[] name;
	name = new char[strlen(newName)+1];
	strcpy(name, newName);
}

void Product::setPrice(const double newPrice) {
	price = newPrice;
}

void Product::setAmount(const unsigned int newAmount) {
	amount = newAmount;
}

void Product::addAmount(const unsigned int amount) {
	this->amount += amount;
}

void Product::printInfo() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Price: " << price << std::endl;
	std::cout << "Amount: " << amount << std::endl;
}
