#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include <string>

class Helicopter: public AirVehicle {
    private: 
        std::string name;

    public:
        Helicopter(int w, std::string n);
        Helicopter();

        std::string get_name();
        void set_name(std::string new_name);

        void fly(int headwind, int minutes);
};

#endif