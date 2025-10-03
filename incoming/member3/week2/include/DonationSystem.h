#ifndef DONATIONSYSTEM_H
#define DONATIONSYSTEM_H

#include <vector>
#include "Donor.h"
#include "NGO.h"
#include "Volunteer.h"

class DonationSystem {
private:
    std::vector<Donor> donors;
    std::vector<NGO> ngos;
    std::vector<Volunteer> volunteers;

public:
    // Add functions
    void addDonor(const Donor& donor);
    void addNGO(const NGO& ngo);
    void addVolunteer(const Volunteer& volunteer);

    // Matching logic
    void matchDonations();

    // Display all data
    void displayAll() const;
};

#endif
