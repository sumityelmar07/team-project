#include "NGO.h"
#include <iostream>
using namespace std;

NGO::NGO(int i, string n, string loc, int cap, bool acc) {
    id = i;
    name = n;
    location = loc;
    capacity = cap;
    acceptsNonVeg = acc;
}

bool NGO::acceptFood(int qty) {
    if (qty <= capacity) {
        capacity -= qty;
        return true;
    }
    return false;
}

void NGO::displayInfo() {
    cout << "[NGO] ID: " << id << ", Name: " << name
         << ", Location: " << location
         << ", Capacity: " << capacity
         << ", Accepts Non-Veg: " << (acceptsNonVeg ? "Yes" : "No") << endl;
}
