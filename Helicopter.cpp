#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n): AirVehicle(w) {
    name = n;
}

Helicopter::Helicopter(): Helicopter(0, "") {}

std::string Helicopter::get_name() {
    return name;
}

void Helicopter::set_name(std::string new_name) {
    name = new_name;
}

void Helicopter::fly(int headwind, int minutes) {
    float fuel_per_minute = (headwind >= 40 ? 0.004 : 0.0018);
    float fuel_consumption = fuel_per_minute * minutes + 0.0001 * (weight > 5670 ? (weight - 5670) : 0) * minutes;
    if (fuel - fuel_consumption < 0.2) {
        return;
    }
    fuel -= fuel_consumption;
    AirVehicle::fly(headwind, minutes);
}
