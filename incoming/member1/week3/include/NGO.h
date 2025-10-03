#ifndef NGO_H
#define NGO_H

#include "Person.h"
#include <string>
using namespace std;

class NGO : public Person {
private:
    int ngoID;
    string location;
    int capacity;

public:
    NGO(int id, string n, string c, string loc, int cap);

    int getNGOID();
    string getLocation();
    int getCapacity();
    void setNGOID(int id);
    void setLocation(string loc);
    void setCapacity(int cap);

    void displayInfo() override; // Polymorphism
};

#endif
