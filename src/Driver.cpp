#include "../include/Driver.hpp"

Driver::Driver(int id, string n, string p, Vehicle v)
    : User(id, n, p), vehicle(v)
{
    available = false;
}

void Driver::setAvailability(bool status)
{
    available = status;
}

bool Driver::isAvailable() const
{
    return available;
}

Vehicle Driver::getVehicle() const
{
    return vehicle;
}

void Driver::displayProfile() const
{
    cout << "Driver ID: " << getUserId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Phone: " << getPhone() << endl;

    cout << "Availability: ";

    if (available)
        cout << "Available" << endl;
    else
        cout << "Not Available" << endl;

    cout << "Vehicle Information:" << endl;
    vehicle.displayVehicle();
}