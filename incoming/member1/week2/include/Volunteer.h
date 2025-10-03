#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include <string>
using namespace std;

class Volunteer {
private:
    int id;
    string name;
    string contact;
    bool available;
    int maxCarry;

public:
    Volunteer(int i, string n, string c, bool a, int mc);

    // Getters & Setters
    int getId();
    string getName();
    string getContact();
    bool isAvailable();
    int getMaxCarry();

    void setId(int i);
    void setName(string n);
    void setContact(string c);
    void setAvailability(bool a);
    void setMaxCarry(int mc);

    void assign();
    void displayInfo();
};

#endif
