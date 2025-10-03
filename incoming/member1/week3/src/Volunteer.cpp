#include "Volunteer.h"
#include <iostream>
using namespace std;

Volunteer::Volunteer(int id, string n, string c, bool avail)
    : Person(n, c), volunteerID(id), available(avail) {}

int Volunteer::getVolunteerID() { return volunteerID; }
bool Volunteer::isAvailable() { return available; }
void Volunteer::setVolunteerID(int id) { volunteerID = id; }
void Volunteer::setAvailability(bool a) { available = a; }

void Volunteer::displayInfo() {
    cout << "[Volunteer] ID: " << volunteerID
         << ", Name: " << getName()
         << ", Contact: " << getContact()
         << ", Available: " << (available ? "Yes" : "No") << endl;
}
