#include "Volunteer.h"
#include <iostream>
using namespace std;

Volunteer::Volunteer(int i, string n, string c, bool a, int mc) {
    id = i;
    name = n;
    contact = c;
    available = a;
    maxCarry = mc;
}

void Volunteer::assign() {
    if (available) {
        available = false;
        cout << "Volunteer " << name << " assigned!" << endl;
    } else {
        cout << "Volunteer not available." << endl;
    }
}

void Volunteer::displayInfo() {
    cout << "[Volunteer] ID: " << id << ", Name: " << name
         << ", Contact: " << contact
         << ", Available: " << (available ? "Yes" : "No")
         << ", Max Carry: " << maxCarry << endl;
}
