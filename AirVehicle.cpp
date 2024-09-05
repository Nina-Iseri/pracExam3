#include "AirVehicle.h"


AirVehicle::AirVehicle(int w): weight(w) {
    fuel = 100;  // initial 100%
    numberOfFlights = 0;
}

AirVehicle::AirVehicle(): AirVehicle(0) {}

void AirVehicle::refuel() {
    fuel = 100;
}

void AirVehicle::fly(int headwind, int minutes) {
    numberOfFlights++;
}

int AirVehicle::get_weight() {
    return weight;
}

void AirVehicle::set_weight(int w) {
    weight = w;
}

float AirVehicle::get_fuel() {
    return fuel;
}

void AirVehicle::set_fuel(float f) {
    fuel = f;
}

int AirVehicle::get_numberOfFlights() {
    return  numberOfFlights;
}

void AirVehicle::set_numberOfFlights(int n) {
    numberOfFlights = n;
}