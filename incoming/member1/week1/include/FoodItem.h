#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>
using namespace std;

class FoodItem {
public:
    string name;
    int quantity;
    bool isVeg;

    FoodItem(string n, int q, bool v);
};

#endif
