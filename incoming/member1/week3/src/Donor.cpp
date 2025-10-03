#include "Donor.h"
#include <iostream>
using namespace std;

Donor::Donor(int id, string n, string c, string loc)
    : Person(n, c), donorID(id), location(loc) {}

int Donor::getDonorID() { return donorID; }
string Donor::getLocation() { return location; }
void Donor::setDonorID(int id) { donorID = id; }
void Donor::setLocation(string loc) { location = loc; }

void Donor::displayInfo() {
    cout << "[Donor] ID: " << donorID
         << ", Name: " << getName()
         << ", Location: " << location
         << ", Contact: " << getContact() << endl;
}
