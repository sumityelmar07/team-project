#include "Volunteer.h"
#include <iostream>
using namespace std;

Volunteer::Volunteer(int i, string n, string c, bool a, int mc)
    : id(i), name(n), contact(c), available(a), maxCarry(mc) {}

int Volunteer::getId() { return id; }
string Volunteer::getName() { return name; }
string Volunteer::getContact() { return contact; }
bool Volunteer::isAvailable() { return available; }
int Volunteer::getMaxCarry() { return maxCarry; }

void Volunteer::setId(int i) { id = i; }
void Volunteer::setName(string n) { name = n; }
void Volunteer::setContact(string c) { contact = c; }
void Volunteer::setAvailability(bool a) { available = a; }
void Volunteer::setMaxCarry(int mc) { maxCarry = mc; }

void Volunteer::assign() {
    if (available) {
        available = false;
        cout << "Volunteer " << name << " assigned!" << endl;
    } else {
        cout << "Volunteer " << name << " is not available." << endl;
    }
}

void Volunteer::displayInfo() {
    cout << "[Volunteer] ID: " << id
         << ", Name: " << name
         << ", Contact: " << contact
         << ", Available: " << (available ? "Yes" : "No")
         << ", Max Carry: " << maxCarry << endl;
}
