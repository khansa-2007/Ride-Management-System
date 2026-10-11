#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include "Ride.hpp"
#include "Driver.hpp"
#include "Passenger.hpp"

class FileManager
{
public:
    static void saveDriver(const Driver& driver);
    static void savePassenger(const Passenger& passenger);
    static void saveRide(const Ride& ride);

    static void loadDrivers();
    static void loadPassengers();
    static void loadRides();
};

#endif