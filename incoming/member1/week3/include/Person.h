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
    virtual ~Person() {}

    // Getters & Setters
    string getName();
    string getContact();
    void setName(string n);
    void setContact(string c);

    // Pure virtual function (Abstraction + Polymorphism)
    virtual void displayInfo() = 0;
};

#endif
