#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
    string vehicleType;
    string model;
    string registrationNumber;

public:
    Vehicle(string type, string m, string reg);

    void setVehicleType(string type);
    void setModel(string m);
    void setRegistrationNumber(string reg);

    string getVehicleType() const;
    string getModel() const;
    string getRegistrationNumber() const;

    void displayVehicle() const;
};

#endif