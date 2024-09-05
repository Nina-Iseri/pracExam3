#include "Airplane.h"

Airplane::Airplane(int w, int p): AirVehicle(w) {
    numPassengers = (p > 0 ? p : 0);
}

Airplane::Airplane(): Airplane(0, 0) {};

int Airplane::get_numPassengers() {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) numPassengers = 0;
}

void Airplane::fly(int headwind, int minutes) {
    float fuel_per_minute = (headwind >= 60 ? 0.005 : 0.0025);
    float fuel_consumption = fuel_per_minute * minutes + 0.00001 * numPassengers * minutes;
    if (fuel - fuel_consumption < 0.2) {
        return;
    }
    fuel -= fuel_consumption;
    AirVehicle::fly(headwind, minutes);
}