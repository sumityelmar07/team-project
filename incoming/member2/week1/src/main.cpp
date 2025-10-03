#include "data_manager.h"
#include <iostream>

int main() {
    DataManager dm;

    // Test writing
    dm.writeTest("Hello File Handling!");
    dm.writeTest("Second line of text.");

    // Test reading
    dm.readTest();

    return 0;
}