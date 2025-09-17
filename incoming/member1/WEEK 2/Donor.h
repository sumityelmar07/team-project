#ifndef DONOR_H
#define DONOR_H

#include "FoodItem.h"
#include <vector>
#include <string>
using namespace std;

class Donor {
private:
    int id;
    string name;
    string location;
    vector<FoodItem> postedFoods;

public:
    Donor(int i, string n, string loc);

    // Getters & Setters
    int getId();
    string getName();
    string getLocation();
    void setId(int i);
    void setName(string n);
    void setLocation(string loc);

    void addFood(FoodItem f);
    void displayInfo();
};

#endif
