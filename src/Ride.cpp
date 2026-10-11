#include "../include/Ride.hpp"
#include <iostream>

using namespace std;

Ride::Ride(Passenger p, Driver d, string pickup, string dest)
    : passenger(p), driver(d)
{
    pickupLocation = pickup;
    destination = dest;
    status = "Requested";
}

void Ride::setStatus(string s)
{
    status = s;
}

string Ride::getStatus() const
{
    return status;
}

void Ride::displayRide() const
{
    cout << "\n--- Ride Information ---" << endl;

    cout << "Pickup Location: " << pickupLocation << endl;
    cout << "Destination: " << destination << endl;
    cout << "Ride Status: " << status << endl;

    cout << "\nPassenger:" << endl;
    passenger.displayProfile();

    cout << "\nDriver:" << endl;
    driver.displayProfile();
}