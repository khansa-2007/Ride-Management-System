#ifndef RIDE_HPP
#define RIDE_HPP

#include "Passenger.hpp"
#include "Driver.hpp"

class Ride
{
private:
    Passenger passenger;
    Driver driver;
    string pickupLocation;
    string destination;
    string status;

public:
    Ride(Passenger p, Driver d, string pickup, string dest);

    void setStatus(string s);
    string getStatus() const;

    void displayRide() const;
};

#endif