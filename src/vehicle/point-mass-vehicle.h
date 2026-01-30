#pragma once
#include "config/config.h"
class PointMassVehicle {
   public:
    PointMassVehicle(VehicleConfig config) {};

    // You should implement it the smart way or the way i proposed here i do not realy care
    bool CanI(float velocity, float curveature) { return false; };
    float CanIAccelerate(float tire_y_force) { return 0.0f; };
};
