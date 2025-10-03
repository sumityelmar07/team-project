#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>
using namespace std;

class FoodItem {
    string foodName;
    int quantity;
public:
    FoodItem(string fn, int qty);
    string getName() const;
    int getQuantity() const;
};

#endif
