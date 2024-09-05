#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"

class AirFleet {
    private:
        int capacity;
        int count;
        AirVehicle **fleet;

    public:
        AirFleet();

        AirVehicle **get_fleet();
        int get_capacity();
        int get_count();

        ~AirFleet();
};

#endif