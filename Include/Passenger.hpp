#ifndef PASSENGER_HPP
#define PASSENGER_HPP

#include "User.hpp"
#include <iostream>

class Passenger : public User
{
private:
    string pickupLocation;
    string destination;

public:
    Passenger(int id, string n, string p);

    void setPickupLocation(string pickup);
    void setDestination(string dest);

    string getPickupLocation() const;
    string getDestination() const;

    void displayProfile() const override;
};

#endif