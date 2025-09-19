#ifndef DATA_MANAGER_H
#define DATA_MANAGER_H

#include <string>
#include <vector>

// Models
struct Donor {
    std::string name;
    std::string food;
};

struct NGO {
    std::string name;
    std::string location;
};

struct Volunteer {
    std::string name;
    std::string contact;
};

class DataManager {
public:
    // Donor functions
    void saveDonor(const Donor& d);
    std::vector<Donor> loadDonors();

    // NGO functions
    void saveNGO(const NGO& n);
    std::vector<NGO> loadNGOs();

    // Volunteer functions
    void saveVolunteer(const Volunteer& v);
    std::vector<Volunteer> loadVolunteers();
};

#endif