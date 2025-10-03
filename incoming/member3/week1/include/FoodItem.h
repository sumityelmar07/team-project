#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>
#include <iostream>

class FoodItem {
private:
    std::string name;
    int quantity;
    std::string expiryDate;  // Format: YYYY-MM-DD
    bool isVeg;              // true = veg, false = non-veg

public:
    // Constructor
    FoodItem(std::string n = "", int q = 0, std::string exp = "2099-12-31", bool veg = true);

    // Getters
    std::string getName() const;
    int getQuantity() const;
    std::string getExpiryDate() const;
    bool getIsVeg() const;

    // Setters
    void setName(const std::string& n);
    void setQuantity(int q);
    void setExpiryDate(const std::string& exp);
    void setIsVeg(bool veg);

    // Operator overloading (compare expiry dates)
    bool operator<(const FoodItem& other) const; // earlier expiry
    bool operator>(const FoodItem& other) const;

    // Print info
    void display() const;
};

#endif
