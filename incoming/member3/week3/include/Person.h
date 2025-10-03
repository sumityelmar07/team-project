#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    string contact;
public:
    Person(string n, string c);
    virtual void displayInfo() = 0; // pure virtual
    string getName() const;
};

#endif
