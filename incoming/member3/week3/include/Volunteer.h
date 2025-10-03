#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include "Person.h"
#include <iostream>
using namespace std;

class Volunteer : public Person {
    bool available;
public:
    Volunteer(string n, string c, bool avail = true);
    void displayInfo() override;
    bool isAvailable() const;
    void setAvailability(bool val);
};

#endif
