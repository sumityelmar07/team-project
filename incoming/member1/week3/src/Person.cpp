#include "Person.h"

Person::Person(string n, string c) : name(n), contact(c) {}

string Person::getName() { return name; }
string Person::getContact() { return contact; }
void Person::setName(string n) { name = n; }
void Person::setContact(string c) { contact = c; }
