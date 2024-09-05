#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"
#include <string>
using namespace std;

int main(void) {
    Helicopter my_heli(5690, "Firebird");
    my_heli.set_fuel(0.8);
    cout << "initial fuel: " << my_heli.get_fuel() << endl;
    my_heli.fly(45, 10);
    cout << "fuel after flying 10 minutes into a 45 km/h headwind is: " << my_heli.get_fuel() << endl;
    return 0;
}