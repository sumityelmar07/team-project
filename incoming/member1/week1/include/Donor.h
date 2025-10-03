#ifndef DONOR_H
#define DONOR_H

#include "FoodItem.h"
#include <vector>
#include <string>
using namespace std;

class Donor {
public:
    int id;
    string name;
    string location;
    vector<FoodItem> postedFoods;

    Donor(int i, string n, string loc);
    void addFood(FoodItem f);
    void displayInfo();
};

#endif

