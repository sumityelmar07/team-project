#include "data_manager.h"
#include <fstream>
#include <iostream>

// Write simple test data into a file
void DataManager::writeTest(const std::string& text) {
    std::ofstream file("data/test.txt", std::ios::app);
    if (file.is_open()) {
        file << text << "\n";
        std::cout << "Written: " << text << std::endl;
    } else {
        std::cerr << "Error: Could not open test.txt for writing!\n";
    }
}

// Read and print data from the file
void DataManager::readTest() {
    std::ifstream file("data/test.txt");
    std::string line;
    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::cout << "Read: " << line << std::endl;
        }
    } else {
        std::cerr << "Error: Could not open test.txt for reading!\n";
    }
}