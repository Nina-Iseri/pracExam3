#include <iostream>
#include "AirVehicle.h"
using namespace std;

int main(void) {
    AirVehicle my_av(100);
    cout << "weight: " << my_av.get_weight() << endl;
    cout << "initial fuel: " << my_av.get_fuel() << endl;
    cout << "initial number of flights: " << my_av.get_numberOfFlights() << endl;
    my_av.set_numberOfFlights(100);
    cout << "current number of flights: " << my_av.get_numberOfFlights() << endl;
    return 0;
}