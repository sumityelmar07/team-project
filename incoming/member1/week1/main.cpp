#include "Donor.h"
#include "NGO.h"
#include "Volunteer.h"
#include <iostream>
using namespace std;

int main() {
    Donor d1(101, "Hotel Sunrise", "Pune");
    d1.addFood(FoodItem("Veg Biryani", 50, true));

    NGO n1(201, "Helping Hands", "Mumbai", 100, true);
    Volunteer v1(301, "Rahul Sharma", "111222333", true, 40);

    d1.displayInfo();
    n1.displayInfo();
    v1.displayInfo();

    return 0;
}
