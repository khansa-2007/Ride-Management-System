#include "../include/FileManager.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void FileManager::saveDriver(const Driver& driver)
{
    ofstream file("data/drivers.txt");

    if (!file)
    {
        cout << "Error opening drivers file." << endl;
        return;
    }

    file << "Driver ID: " << driver.getUserId() << endl;
    file << "Name: " << driver.getName() << endl;
    file << "Phone: " << driver.getPhone() << endl;
    file << "------------------------" << endl;

    file.close();
}

void FileManager::savePassenger(const Passenger& passenger)
{
  ofstream file("data/passengers.txt");

    if (!file)
    {
        cout << "Error opening passengers file." << endl;
        return;
    }

    file << "Passenger ID: " << passenger.getUserId() << endl;
    file << "Name: " << passenger.getName() << endl;
    file << "Phone: " << passenger.getPhone() << endl;
    file << "Pickup: " << passenger.getPickupLocation() << endl;
    file << "Destination: " << passenger.getDestination() << endl;
    file << "------------------------" << endl;

    file.close();
}

void FileManager::saveRide(const Ride& ride)
{
   ofstream file("data/rides.txt");

    if (!file)
    {
        cout << "Error opening rides file." << endl;
        return;
    }

    file << "Ride Record" << endl;
    file << "Status: " << ride.getStatus() << endl;
    file << "------------------------" << endl;

    file.close();

    cout << "Ride saved successfully." << endl;
}

void FileManager::loadDrivers()
{
   ifstream file("data/drivers.txt");

    if (!file)
    {
        cout << "No drivers file found." << endl;
        return;
    }

    string line;

    cout << "\n===== SAVED DRIVERS =====" << endl;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void FileManager::loadPassengers()
{
   ifstream file("data/passengers.txt");

    if (!file)
    {
        cout << "No passengers file found." << endl;
        return;
    }

    string line;

    cout << "\n===== SAVED PASSENGERS =====" << endl;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void FileManager::loadRides()
{
   ifstream file("data/rides.txt");
   
    if (!file)
    {
        cout << "No rides file found." << endl;
        return;
    }

    string line;

    cout << "\n===== SAVED RIDES =====" << endl;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}