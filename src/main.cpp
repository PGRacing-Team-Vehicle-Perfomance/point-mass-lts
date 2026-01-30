#include <cstdio>
#include <iostream>

#include "config/config.h"
#include "vehicle/point-mass-vehicle.h"

int main() {
    // ground rules:
    // do not use other files than this one, vehicle/point-mass-vehicle.h and config/config.h
    // implement whole logick of our "sims" in this file

    // plan:
    // 1. create only curved line sim
    // 2. create straight line sim
    // 3. combine

    // this is our car config
    VehicleConfig vehicle_config;
    // EnvironmentConfig config; //uncoment when needed. Listen to inside voice it will tell you
    // when
    PointMassVehicle vehicle(vehicle_config);

    // here put skidpad sim. It is not realy a sim. It is sort of a validator.
    // you can make it aero sensitive or not. It is your choice
    // lets create it.
    float sikdpad_radious = 5;  //[m]

    // print something to show us if it managed to skid
    std::cout << "the cart can skid it" << std::endl;
    std::cout << "the cart can not skid it" << std::endl;

    // now create array of velocit -> radious that it can skid. Best would be to create like an
    // excel table where the first column is velocity and second one is radious
    for (;;) {
        break;
    }
    // We did it we have skid pad sim !!YEEEEY!!
    // But better print it to be sure
    std::cout << "answer (change it to print array, propably you will have to for loop it)"
              << std::endl;

    // here put straight line sim but as before we will not create sim rather answer to the question
    // "How fast can i accelerate at this speed?"
    // you can make it aero sensitive or not. It is your choice.

    // lets find out how fast i can accelerate at a given speed
    float velocity = 15;  //[m/s]
    std::cout << "the cart can accelerate this fast " << 69 << "m/s/s" << std::endl;
    // just like before we should make it an array
    for (;;) {
        break;
    }
    // We did it we have acc sim !!YEEEEY!!
    // But like before lest print it
    std::cout << "answer (change it to print array, propably you will have to for loop it)"
              << std::endl;

    // Now easy part, the same tasks but with deceleration not acceleration
    // lets find out how fast i can decelerate at a given speed
    velocity = 15;  //[m/s]
    std::cout << "the cart can accelerate this fast " << 69 << "m/s/s" << std::endl;
    // just like before we should make it an array
    for (;;) {
        break;
    }
    // We did it we have dec sim !!YEEEEY!!
    // But like before lest print it
    std::cout << "answer (change it to print array, propably you will have to for loop it)"
              << std::endl;

    // Now combine the mighty "sims" it should create friction/power envelope or in other worlds
    // g-g-v diagram
    // and the ponit mass car is done

    // now we have to tackle the beast of track time simulation
    // but i will not produce more of the tut before you finish up till this poiny. If you do
    // conntact me i will help you further
}
