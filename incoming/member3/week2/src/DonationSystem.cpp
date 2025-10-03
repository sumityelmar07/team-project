#include "DonationSystem.h"
#include <iostream>

// Add donor to system
void DonationSystem::addDonor(const Donor& donor) {
    donors.push_back(donor);
}

// Add NGO to system
void DonationSystem::addNGO(const NGO& ngo) {
    ngos.push_back(ngo);
}

// Add volunteer to system
void DonationSystem::addVolunteer(const Volunteer& volunteer) {
    volunteers.push_back(volunteer);
}

// Matching logic (Donor → NGO capacity check)
void DonationSystem::matchDonations() {
    for (auto& donor : donors) {
        bool matched = false;

        for (auto& ngo : ngos) {
            if (ngo.getCapacity() >= donor.getDonationAmount()) {
                std::cout << "[MATCH] Donor " << donor.getName()
                          << " (Donation: " << donor.getDonationAmount() << ") "
                          << " → NGO " << ngo.getName()
                          << " (Remaining capacity: " << ngo.getCapacity() << ")\n";

                // Reduce NGO capacity after donation
                ngo.reduceCapacity(donor.getDonationAmount());
                matched = true;
                break;
            }
        }

        if (!matched) {
            std::cout << "[NO MATCH] Donor " << donor.getName()
                      << " could not be matched (insufficient NGO capacity).\n";
        }
    }
}

// Display all system info
void DonationSystem::displayAll() const {
    std::cout << "\n--- Donors ---\n";
    for (const auto& d : donors) d.displayInfo();

    std::cout << "\n--- NGOs ---\n";
    for (const auto& n : ngos) n.displayInfo();

    std::cout << "\n--- Volunteers ---\n";
    for (const auto& v : volunteers) v.displayInfo();
}
