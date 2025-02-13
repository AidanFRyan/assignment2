#include <iostream>
// #include "Car.h"
// #include "Bicycle.h"
#include "Jet.h"
#include "Skateboard.h"
#include "F1.h"

void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
    std::cout << "Driving simulator" << std::endl;
    int size = 6;
    int capacity = 10;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Jet();
    vehiclesArray[1] = new Jet("Boeing", "737 Max 8");
    vehiclesArray[2] = new Skateboard("Skate", "Bored");
    vehiclesArray[3] = new Skateboard();
    vehiclesArray[4] = new F1("Kimi", "Ferrari", "Ferrari", 7, "race");
    vehiclesArray[5] = new F1();

    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}
