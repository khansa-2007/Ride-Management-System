#ifndef DRIVER_HPP
#define DRIVER_HPP

#include "User.hpp"
#include "Vehicle.hpp"
#include <iostream>

class Driver : public User
{
private:
    Vehicle vehicle;
    bool available;

public:
    Driver(int id, string n, string p, Vehicle v);

    void setAvailability(bool status);
    bool isAvailable() const;

    Vehicle getVehicle() const;

    void displayProfile() const override;
};

#endif