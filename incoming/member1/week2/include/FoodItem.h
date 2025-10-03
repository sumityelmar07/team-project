#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>
using namespace std;

class FoodItem {
private:
    string name;
    int quantity;
    bool isVeg;

public:
    FoodItem(string n, int q, bool v);

    // Getters
    string getName();
    int getQuantity();
    bool getIsVeg();

    // Setters
    void setName(string n);
    void setQuantity(int q);
    void setIsVeg(bool v);

    void displayItem();
};

#endif

