#include "Donor.h"
#include "NGO.h"
#include "Volunteer.h"
#include "FoodItem.h"
#include <iostream>
using namespace std;

int main() {
    Donor d1(101, "Hotel Sunrise", "Pune");
    d1.addFood(FoodItem("Veg Biryani", 50, true));
    d1.addFood(FoodItem("Chicken Curry", 30, false));

    NGO n1(201, "Helping Hands", "Mumbai", 100, true);
    Volunteer v1(301, "Rahul Sharma", "111222333", true, 40);

    d1.displayInfo();
    cout << endl;
    n1.displayInfo();
    cout << endl;
    v1.displayInfo();
    cout << endl;

    // NGO accepting food
    if (n1.acceptFood(50))
        cout << "NGO accepted 50 meals!" << endl;
    else
        cout << "NGO could not accept food." << endl;

    // Volunteer assignment
    v1.assign();
    v1.displayInfo();

    return 0;
}
