#ifndef DONATIONSYSTEM_H
#define DONATIONSYSTEM_H

#include "Volunteer.h"
#include "FoodItem.h"
#include <vector>
#include <stdexcept>
#include <iostream>
using namespace std;

class DonationSystem {
    vector<Volunteer> volunteers;
    vector<FoodItem> transactions;
public:
    void addVolunteer(const Volunteer &v);
    Volunteer assignVolunteer();
    
    template <typename T>
    T* searchByName(vector<T> &entities, const string &name);

    void postFood(FoodItem food);
    void generateDailyReport();
    void displayVolunteers();
};

#endif
