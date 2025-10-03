#include "DonationSystem.h"
#include "Volunteer.h"
#include "FoodItem.h"
#include <iostream>
using namespace std;

int main() {
    DonationSystem ds;

    // Add Volunteers
    ds.addVolunteer(Volunteer("Ravi Kumar", "12345"));
    ds.addVolunteer(Volunteer("Sneha Patil", "67890"));

    // Post Food Items
    ds.postFood(FoodItem("Veg Biryani", 50));
    ds.postFood(FoodItem("Paneer Curry", 30));
    ds.postFood(FoodItem("Sandwiches", 20)); // will throw if no volunteer

    // Generate Daily Report
    ds.generateDailyReport();

    // Display all volunteers
    ds.displayVolunteers();

    return 0;
}
