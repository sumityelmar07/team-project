#include "data_manager.h"
#include <iostream>
using namespace std;

int main() {
    DataManager dm;

    // Save some data
    dm.saveDonor({"Alice", "Rice"});
    dm.saveNGO({"HelpingHands", "Mumbai"});
    dm.saveVolunteer({"Bob", "9876543210"});

    // Load data
    auto donors = dm.loadDonors();
    auto ngos = dm.loadNGOs();
    auto volunteers = dm.loadVolunteers();

    // Print results
    cout << "\n--- Donors ---\n";
    for (auto& d : donors) cout << d.name << " donated " << d.food << "\n";

    cout << "\n--- NGOs ---\n";
    for (auto& n : ngos) cout << n.name << " located at " << n.location << "\n";

    cout << "\n--- Volunteers ---\n";
    for (auto& v : volunteers) cout << v.name << " (contact: " << v.contact << ")\n";

    return 0;
}