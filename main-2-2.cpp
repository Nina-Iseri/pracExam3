#include <iostream>
#include "AirVehicle.h"
#include "Airplane.h"
#include <string>
using namespace std;

int main(void) {
    Airplane my_plane(1000, 100);
    my_plane.set_fuel(0.95);
    cout << "initial fuel: " << my_plane.get_fuel() << endl;
    my_plane.fly(65, 120);
    cout << "fuel after flying 10 minutes into a 45 km/h headwind is: " << my_plane.get_fuel() << endl;
    return 0;
}