#ifndef DATA_MANAGER_H
#define DATA_MANAGER_H

#include <string>

class DataManager {
public:
    void writeTest(const std::string& text);   // test write
    void readTest();                           // test read
};

#endif