#include <iostream>
#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"

int main() {
    auto coords1 = Helper::generateRandomCoordinates(10, 10);
    auto coords2 = Helper::generateRandomCoordinates(10, 10);

    std::cout << "Coordinates 1: (" << std::get<0>(coords1) << ", " << std::get<1>(coords1) << ")\n";
    std::cout << "Coordinates 2: (" << std::get<0>(coords2) << ", " << std::get<1>(coords2) << ")\n";

    double distance = Helper::calculateDistance(coords1, coords2);
    std::cout << "Distance between coords1 and coords2: " << distance << "\n";

    GridUnit unit1(std::get<0>(coords1), std::get<1>(coords1), 'U');
    std::cout << "Unit1: (" << std::get<0>(unit1.getCoordinates()) << ", " << std::get<1>(unit1.getCoordinates()) << "), Entity: " << unit1.getEntity() << "\n";

    unit1.setCoordinates(5, 5);
    unit1.setEntity('N');
    std::cout << "Unit1 after update: (" << std::get<0>(unit1.getCoordinates()) << ", " << std::get<1>(unit1.getCoordinates()) << "), Entity: " << unit1.getEntity() << "\n";

    return 0;
}
