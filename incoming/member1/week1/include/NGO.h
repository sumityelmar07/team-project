#ifndef NGO_H
#define NGO_H

#include <string>
using namespace std;

class NGO {
public:
    int id;
    string name;
    string location;
    int capacity;
    bool acceptsNonVeg;

    NGO(int i, string n, string loc, int cap, bool acc);
    bool acceptFood(int qty);
    void displayInfo();
};

#endif
