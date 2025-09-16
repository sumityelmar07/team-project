#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include <string>
using namespace std;

class Volunteer {
public:
    int id;
    string name;
    string contact;
    bool available;
    int maxCarry;

    Volunteer(int i, string n, string c, bool a, int mc);
    void assign();
    void displayInfo();
};

#endif
