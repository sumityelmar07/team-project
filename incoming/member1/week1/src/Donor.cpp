#include "Donor.h"
#include <iostream>
using namespace std;

Donor::Donor(int i, string n, string loc) {
    id = i;
    name = n;
    location = loc;
}

void Donor::addFood(FoodItem f) {
    postedFoods.push_back(f);
}

void Donor::displayInfo() {
    cout << "[Donor] ID: " << id << ", Name: " << name
         << ", Location: " << location << endl;
    for (auto &f : postedFoods) {
        cout << "  Food: " << f.name << " (" << f.quantity 
             << ") " << (f.isVeg ? "Veg" : "Non-Veg") << endl;
    }
}
