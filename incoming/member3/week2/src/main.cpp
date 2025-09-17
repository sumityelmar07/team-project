#include <iostream>
#include "DonationSystem.h"
#include "Donor.h"
#include "NGO.h"
#include "Volunteer.h"

int main() {
    DonationSystem system;

    // Add sample NGOs
    system.addNGO(NGO("Helping Hands", 50));
    system.addNGO(NGO("Food for All", 30));

    // Add sample Donors
    system.addDonor(Donor("Alice", 20));
    system.addDonor(Donor("Bob", 40));
    system.addDonor(Donor("Charlie", 25));

    // Add Volunteers
    system.addVolunteer(Volunteer("Ravi"));
    system.addVolunteer(Volunteer("Priya"));

    // Display before matching
    std::cout << "=== BEFORE MATCHING ===\n";
    system.displayAll();

    // Perform matching
    std::cout << "\n=== MATCHING DONATIONS ===\n";
    system.matchDonations();

    // Display after matching
    std::cout << "\n=== AFTER MATCHING ===\n";
    system.displayAll();

    return 0;
}
