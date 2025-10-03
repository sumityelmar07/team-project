#include "data_manager.h"
#include <fstream>
#include <iostream>

// ---------------- Donors ----------------
void DataManager::saveDonor(const Donor& d) {
    std::ofstream file("data/donors.txt", std::ios::app);
    if (file.is_open()) {
        file << d.name << "," << d.food << "\n";
    } else {
        std::cerr << "Error: donors.txt could not be opened for writing!\n";
    }
}

std::vector<Donor> DataManager::loadDonors() {
    std::vector<Donor> donors;
    std::ifstream file("data/donors.txt");
    std::string name, food;

    if (file.is_open()) {
        while (std::getline(file, name, ',') && std::getline(file, food)) {
            donors.push_back({name, food});
        }
    } else {
        std::cerr << "Error: donors.txt not found!\n";
    }

    if (donors.empty()) {
        std::cerr << "Warning: Donor list is empty!\n";
    }

    return donors;
}

// ---------------- NGOs ----------------
void DataManager::saveNGO(const NGO& n) {
    std::ofstream file("data/ngos.txt", std::ios::app);
    if (file.is_open()) {
        file << n.name << "," << n.location << "\n";
    } else {
        std::cerr << "Error: ngos.txt could not be opened for writing!\n";
    }
}

std::vector<NGO> DataManager::loadNGOs() {
    std::vector<NGO> ngos;
    std::ifstream file("data/ngos.txt");
    std::string name, location;

    if (file.is_open()) {
        while (std::getline(file, name, ',') && std::getline(file, location)) {
            ngos.push_back({name, location});
        }
    } else {
        std::cerr << "Error: ngos.txt not found!\n";
    }

    if (ngos.empty()) {
        std::cerr << "Warning: NGO list is empty!\n";
    }

    return ngos;
}

// ---------------- Volunteers ----------------
void DataManager::saveVolunteer(const Volunteer& v) {
    std::ofstream file("data/volunteers.txt", std::ios::app);
    if (file.is_open()) {
        file << v.name << "," << v.contact << "\n";
    } else {
        std::cerr << "Error: volunteers.txt could not be opened for writing!\n";
    }
}

std::vector<Volunteer> DataManager::loadVolunteers() {
    std::vector<Volunteer> volunteers;
    std::ifstream file("data/volunteers.txt");
    std::string name, contact;

    if (file.is_open()) {
        while (std::getline(file, name, ',') && std::getline(file, contact)) {
            volunteers.push_back({name, contact});
        }
    } else {
        std::cerr << "Error: volunteers.txt not found!\n";
    }

    if (volunteers.empty()) {
        std::cerr << "Warning: Volunteer list is empty!\n";
    }

    return volunteers;
}