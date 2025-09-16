#include "FoodItem.h"
#include <iostream>

// Constructor
FoodItem::FoodItem(std::string n, int q, std::string exp, bool veg)
    : name(n), quantity(q), expiryDate(exp), isVeg(veg) {}

// Getters
std::string FoodItem::getName() const { return name; }
int FoodItem::getQuantity() const { return quantity; }
std::string FoodItem::getExpiryDate() const { return expiryDate; }
bool FoodItem::getIsVeg() const { return isVeg; }

// Setters
void FoodItem::setName(const std::string& n) { name = n; }
void FoodItem::setQuantity(int q) { quantity = q; }
void FoodItem::setExpiryDate(const std::string& exp) { expiryDate = exp; }
void FoodItem::setIsVeg(bool veg) { isVeg = veg; }

// Operator overloading (string comparison works for YYYY-MM-DD format)
bool FoodItem::operator<(const FoodItem& other) const {
    return expiryDate < other.expiryDate;
}
bool FoodItem::operator>(const FoodItem& other) const {
    return expiryDate > other.expiryDate;
}

// Display info
void FoodItem::display() const {
    std::cout << "Food Item: " << name 
              << " | Quantity: " << quantity
              << " | Expiry: " << expiryDate
              << " | Type: " << (isVeg ? "Veg" : "Non-Veg") 
              << std::endl;
}
