#ifndef DONOR_H
#define DONOR_H

#include "Person.h"
#include <string>
using namespace std;

class Donor : public Person {
private:
    int donorID;
    string location;

public:
    Donor(int id, string n, string c, string loc);

    // Getters & Setters
    int getDonorID();
    string getLocation();
    void setDonorID(int id);
    void setLocation(string loc);

    void displayInfo() override; // Polymorphism
};

#endif
