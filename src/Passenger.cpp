#include "../include/Passenger.hpp"

Passenger::Passenger(int id, string n, string p)
    : User(id, n, p)
{
    pickupLocation = "";
    destination = "";
}

void Passenger::setPickupLocation(string pickup)
{
    pickupLocation = pickup;
}

void Passenger::setDestination(string dest)
{
    destination = dest;
}

string Passenger::getPickupLocation() const
{
    return pickupLocation;
}

string Passenger::getDestination() const
{
    return destination;
}

void Passenger::displayProfile() const
{
    cout << "Passenger ID: " << getUserId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Phone: " << getPhone() << endl;
}