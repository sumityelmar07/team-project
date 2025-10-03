#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include "Person.h"
using namespace std;

class Volunteer : public Person {
private:
    int volunteerID;
    bool available;

public:
    Volunteer(int id, string n, string c, bool avail);

    int getVolunteerID();
    bool isAvailable();
    void setVolunteerID(int id);
    void setAvailability(bool a);

    void displayInfo() override; // Polymorphism
};

#endif
