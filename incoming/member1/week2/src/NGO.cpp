#include "NGO.h"
#include <iostream>
using namespace std;

NGO::NGO(int i, string n, string loc, int cap, bool acc)
    : id(i), name(n), location(loc), capacity(cap), acceptsNonVeg(acc) {}

int NGO::getId() { return id; }
string NGO::getName() { return name; }
string NGO::getLocation() { return location; }
int NGO::getCapacity() { return capacity; }
bool NGO::getAcceptsNonVeg() { return acceptsNonVeg; }

void NGO::setId(int i) { id = i; }
void NGO::setName(string n) { name = n; }
void NGO::setLocation(string loc) { location = loc; }
void NGO::setCapacity(int cap) { capacity = cap; }
void NGO::setAcceptsNonVeg(bool val) { acceptsNonVeg = val; }

bool NGO::acceptFood(int qty) {
    if (qty <= capacity) {
        capacity -= qty;
        return true;
    }
    return false;
}

void NGO::displayInfo() {
    cout << "[NGO] ID: " << id
         << ", Name: " << name
         << ", Location: " << location
         << ", Capacity: " << capacity
         << ", Accepts Non-Veg: " << (acceptsNonVeg ? "Yes" : "No") << endl;
}
