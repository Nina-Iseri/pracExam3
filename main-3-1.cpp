#include <iostream>
#include <iostream>
#include "AirVehicle.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"
#include <string>
using namespace std;

int main(void) {
    AirFleet my_fleet = AirFleet();
    cout << my_fleet.get_fleet()[1]->get_weight() << endl;
    return 0;
}