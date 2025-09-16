#include "FoodItem.h"
#include <iostream>

int main() {
    FoodItem apple("Apple", 10, "2025-09-30", true);
    FoodItem chicken("Chicken", 5, "2025-09-20", false);

    apple.display();
    chicken.display();

    // Compare expiry
    if (chicken < apple) {
        std::cout << chicken.getName() << " expires earlier than " << apple.getName() << std::endl;
    } else {
        std::cout << apple.getName() << " expires earlier than " << chicken.getName() << std::endl;
    }

    return 0;
}
