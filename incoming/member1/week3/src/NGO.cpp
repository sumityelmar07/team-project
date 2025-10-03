#include "NGO.h"
#include <iostream>
using namespace std;

NGO::NGO(int id, string n, string c, string loc, int cap)
    : Person(n, c), ngoID(id), location(loc), capacity(cap) {}

int NGO::getNGOID() { return ngoID; }
string NGO::getLocation() { return location; }
int NGO::getCapacity() { return capacity; }
void NGO::setNGOID(int id) { ngoID = id; }
void NGO::setLocation(string loc) { location = loc; }
void NGO::setCapacity(int cap) { capacity = cap; }

void NGO::displayInfo() {
    cout << "[NGO] ID: " << ngoID
         << ", Name: " << getName()
         << ", Location: " << location
         << ", Capacity: " << capacity
         << ", Contact: " << getContact() << endl;
}
