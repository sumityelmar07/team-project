#include "Donor.h"
#include <iostream>
using namespace std;

Donor::Donor(int i, string n, string loc) : id(i), name(n), location(loc) {}

int Donor::getId() { return id; }
string Donor::getName() { return name; }
string Donor::getLocation() { return location; }

void Donor::setId(int i) { id = i; }
void Donor::setName(string n) { name = n; }
void Donor::setLocation(string loc) { location = loc; }

void Donor::addFood(FoodItem f) {
    postedFoods.push_back(f);
}

void Donor::displayInfo() {
    cout << "[Donor] ID: " << id
         << ", Name: " << name
         << ", Location: " << location << endl;

    for (auto &f : postedFoods) {
        f.displayItem();
    }
}
