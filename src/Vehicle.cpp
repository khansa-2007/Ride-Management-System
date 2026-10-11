#include "../include/Vehicle.hpp"

Vehicle::Vehicle(string type, string m, string reg)
{
    vehicleType = type;
    model = m;
    registrationNumber = reg;
}

void Vehicle::setVehicleType(string type)
{
    vehicleType = type;
}

void Vehicle::setModel(string m)
{
    model = m;
}

void Vehicle::setRegistrationNumber(string reg)
{
    registrationNumber = reg;
}

string Vehicle::getVehicleType() const
{
    return vehicleType;
}

string Vehicle::getModel() const
{
    return model;
}

string Vehicle::getRegistrationNumber() const
{
    return registrationNumber;
}

void Vehicle::displayVehicle() const
{
    cout << "Vehicle Type: " << vehicleType << endl;
    cout << "Model: " << model << endl;
    cout << "Registration Number: " << registrationNumber << endl;
}