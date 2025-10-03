#include "Donor.h"
#include "NGO.h"
#include "Volunteer.h"
#include <iostream>
using namespace std;

int main() {
    // Base class pointers (Polymorphism in action)
    Person* p1 = new Donor(101, "Hotel Sunrise", "1234567890", "Pune");
    Person* p2 = new NGO(201, "Helping Hands", "9876543210", "Mumbai", 100);
    Person* p3 = new Volunteer(301, "Rahul Sharma", "111222333", true);

    p1->displayInfo();  // Donor version of displayInfo
    p2->displayInfo();  // NGO version of displayInfo
    p3->displayInfo();  // Volunteer version of displayInfo

    delete p1;
    delete p2;
    delete p3;
    return 0;
}

