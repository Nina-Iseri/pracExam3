#include "AirVehicle.h"
#include "AirFleet.h"
#include "Airplane.h"
#include "Helicopter.h"

AirFleet::AirFleet(): capacity(5), count(5) {
    fleet = new AirVehicle*[5];
    fleet[0] = new Airplane(20, 10);
    fleet[1] = new Helicopter(10000, "BlackHawk");
    fleet[2] = new AirVehicle(5000);
    fleet[3] = new Helicopter(100, "WhiteHawk");
    fleet[4] = new Airplane(15, 20);

}

AirVehicle** AirFleet::get_fleet() {
    return fleet;
}

int AirFleet::get_count() {
    return count;
}

int AirFleet::get_capacity() {
    return capacity;
}

AirFleet::~AirFleet() {
    for (int i = 0; i < capacity; i++) {
        delete fleet[i];
    }
    delete[] fleet;
}