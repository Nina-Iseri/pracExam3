#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"

class Airplane: public AirVehicle {
    private:
        int numPassengers;  // non-negative

    public:
        Airplane();
        Airplane(int w, int p);

        int get_numPassengers();

        void reducePassengers(int x);
        void fly(int headwind, int minutes);
};

#endif