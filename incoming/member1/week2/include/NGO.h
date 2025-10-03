#ifndef NGO_H
#define NGO_H

#include <string>
using namespace std;

class NGO {
private:
    int id;
    string name;
    string location;
    int capacity;
    bool acceptsNonVeg;

public:
    NGO(int i, string n, string loc, int cap, bool acc);

    // Getters & Setters
    int getId();
    string getName();
    string getLocation();
    int getCapacity();
    bool getAcceptsNonVeg();

    void setId(int i);
    void setName(string n);
    void setLocation(string loc);
    void setCapacity(int cap);
    void setAcceptsNonVeg(bool val);

    bool acceptFood(int qty);
    void displayInfo();
};

#endif
