#include "DonationSystem.h"

// Add Volunteer
void DonationSystem::addVolunteer(const Volunteer &v) {
    volunteers.push_back(v);
}

// Assign Volunteer
Volunteer DonationSystem::assignVolunteer() {
    for (auto &v : volunteers) {
        if (v.isAvailable()) {
            v.setAvailability(false);
            return v;
        }
    }
    throw runtime_error("No volunteers available for pickup at this time.");
}

// Generic Search Template
template <typename T>
T* DonationSystem::searchByName(vector<T> &entities, const string &name) {
    for (auto &e : entities) {
        if (e.getName() == name)
            return &e;
    }
    return nullptr;
}

// Post Food
void DonationSystem::postFood(FoodItem food) {
    try {
        Volunteer assigned = assignVolunteer();
        transactions.push_back(food);
        cout << "Food posted: " << food.getName()
             << ", Quantity: " << food.getQuantity() << endl;
        cout << "Volunteer assigned: " << assigned.getName() << endl;
    } catch (const runtime_error &e) {
        cout << "ERROR: " << e.what() << endl;
    }
}

// Daily Report
void DonationSystem::generateDailyReport() {
    int totalMeals = 0;
    for (auto &f : transactions) totalMeals += f.getQuantity();
    cout << "\n===== Daily Report =====\n";
    cout << "Total Meals Saved: " << totalMeals << "\n";
    cout << "Total Volunteers Assigned: " << volunteers.size() << "\n";
    cout << "========================\n";
}

// Display Volunteers
void DonationSystem::displayVolunteers() {
    for (auto &v : volunteers) v.displayInfo();
}

// Template functions must be included in header to compile correctly
template <typename T>
T* DonationSystem::searchByName(vector<T> &entities, const string &name) {
    for (auto &e : entities)
        if (e.getName() == name) return &e;
    return nullptr;
}
