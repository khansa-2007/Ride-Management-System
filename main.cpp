#include <iostream>
#include "include/Passenger.hpp"
#include "include/Driver.hpp"
#include "include/Vehicle.hpp"
#include "include/Ride.hpp"
#include "include/Admin.hpp"
#include "include/FileManager.hpp"
#include "include/Rating.hpp"
#include "include/Exceptions.hpp"

using namespace std;

void showHeader()
{
    cout << "\n";
    cout << "+------------------------------------------+\n";
    cout << "|          RIDE MANAGEMENT SYSTEM          |\n";
    cout << "|            Smart Ride Solution           |\n";
    cout << "+------------------------------------------+\n";
}

void showMenu()
{
    cout << "\n";
    cout << "+------------------------------------------+\n";
    cout << "|                MAIN MENU                 |\n";
    cout << "+------------------------------------------+\n";
    cout << "|  1. Passenger Information                |\n";
    cout << "|  2. Driver & Vehicle                     |\n";
    cout << "|  3. Book & Manage Ride                   |\n";
    cout << "|  4. Admin Information                    |\n";
    cout << "|  5. Rating & Exception Test              |\n";
    cout << "|  6. View Saved Records                   |\n";
    cout << "|  0. Exit                                 |\n";
    cout << "+------------------------------------------+\n";
    cout << "Enter your choice: ";
}

int main()
{
    // ================= PASSENGER =================

    int passengerId;
    string passengerName;
    string passengerPhone;
    string pickupLocation;
    string destination;

    cout << "\n========== PASSENGER INFORMATION ==========\n";

    cout << "Enter Passenger ID: ";
    cin >> passengerId;
    cin.ignore();

    cout << "Enter Passenger Name: ";
    getline(cin, passengerName);

    cout << "Enter Passenger Phone: ";
    getline(cin, passengerPhone);

    cout << "Enter Pickup Location: ";
    getline(cin, pickupLocation);

    cout << "Enter Destination: ";
    getline(cin, destination);

    Passenger p1(passengerId, passengerName, passengerPhone);

    p1.setPickupLocation(pickupLocation);
    p1.setDestination(destination);


    // ================= DRIVER =================

    int driverId;
    string driverName;
    string driverPhone;

    string vehicleType;
    string vehicleModel;
    string registrationNumber;

    cout << "\n========== DRIVER INFORMATION ==========\n";

    cout << "Enter Driver ID: ";
    cin >> driverId;
    cin.ignore();

    cout << "Enter Driver Name: ";
    getline(cin, driverName);

    cout << "Enter Driver Phone: ";
    getline(cin, driverPhone);


    // ================= VEHICLE =================

    cout << "\n========== VEHICLE INFORMATION ==========\n";

    cout << "Enter Vehicle Type: ";
    getline(cin, vehicleType);

    cout << "Enter Vehicle Model: ";
    getline(cin, vehicleModel);

    cout << "Enter Registration Number: ";
    getline(cin, registrationNumber);

    Vehicle v1(vehicleType, vehicleModel, registrationNumber);

    Driver d1(driverId, driverName, driverPhone, v1);


    // ================= RIDE =================

    Ride r1(p1, d1, pickupLocation, destination);


    // ================= ADMIN =================

    int adminId;
    string adminName;
    string adminPhone;
    string adminRole;

    cout << "\n========== ADMIN INFORMATION ==========\n";

    cout << "Enter Admin ID: ";
    cin >> adminId;
    cin.ignore();

    cout << "Enter Admin Name: ";
    getline(cin, adminName);

    cout << "Enter Admin Phone: ";
    getline(cin, adminPhone);

    cout << "Enter Admin Role: ";
    getline(cin, adminRole);

    Admin a1(adminId, adminName, adminPhone, adminRole);


    // ================= MAIN MENU =================

    int choice;

    showHeader();

    cout << "\nWelcome to the Ride Management System!\n";

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        // ================= PASSENGER =================

        case 1:
            cout << "\n";
            cout << "============================================\n";
            cout << "          PASSENGER INFORMATION\n";
            cout << "============================================\n";

            p1.displayProfile();

            cout << "Pickup: "
                 << p1.getPickupLocation() << endl;

            cout << "Destination: "
                 << p1.getDestination() << endl;

            cout << "\nPassenger information displayed successfully!\n";

            break;


        // ================= DRIVER =================

        case 2:
            cout << "\n";
            cout << "============================================\n";
            cout << "            DRIVER INFORMATION\n";
            cout << "============================================\n";

            d1.displayProfile();

            cout << "\nDriver information displayed successfully!\n";

            break;


        // ================= RIDE =================

        case 3:
            cout << "\n";
            cout << "============================================\n";
            cout << "             RIDE MANAGEMENT\n";
            cout << "============================================\n";

            cout << "\nRide Details:\n";

            r1.displayRide();

            cout << "\nCurrent Status: "
                 << r1.getStatus() << endl;

            cout << "\n1. Accept Ride\n";
            cout << "2. Reject Ride\n";
            cout << "3. Back\n";
            cout << "Enter choice: ";

            int rideChoice;
            cin >> rideChoice;

            if (rideChoice == 1)
            {
                r1.setStatus("Accepted");

                cout << "\n";
                cout << "********************************************\n";
                cout << "        RIDE ACCEPTED SUCCESSFULLY!\n";
                cout << "********************************************\n";

                cout << "Passenger: "
                     << p1.getName() << endl;

                cout << "Driver: "
                     << d1.getName() << endl;

                cout << "Vehicle: "
                     << vehicleModel << endl;

                cout << "From: "
                     << pickupLocation << endl;

                cout << "To: "
                     << destination << endl;

                cout << "Status: "
                     << r1.getStatus() << endl;

                cout << "********************************************\n";
            }
            else if (rideChoice == 2)
            {
                r1.setStatus("Rejected");

                cout << "\nRide has been rejected.\n";
            }
            else if (rideChoice == 3)
            {
                cout << "\nReturning to main menu...\n";
            }
            else
            {
                cout << "\nInvalid ride choice!\n";
            }

            break;


        // ================= ADMIN =================

        case 4:
            cout << "\n";
            cout << "============================================\n";
            cout << "             ADMIN INFORMATION\n";
            cout << "============================================\n";

            a1.displayAdminProfile();

            cout << "\nAdmin information displayed successfully!\n";

            break;


        // ================= RATING & EXCEPTION =================

        case 5:
            cout << "\n";
            cout << "============================================\n";
            cout << "          RATING & EXCEPTION TEST\n";
            cout << "============================================\n";

            {
                int userRating;
                string userComment;

                cout << "\nEnter Rating (1-5): ";
                cin >> userRating;
                cin.ignore();

                cout << "Enter Your Comment: ";
                getline(cin, userComment);

                try
                {
                    if (userRating < 1 || userRating > 5)
                    {
                        throw InvalidRatingException(
                            "Rating must be between 1 and 5.");
                    }

                    Rating rating1(userRating, userComment);

                    cout << "\n========== RATING ==========\n";

                    rating1.displayRating();
                }
                catch (InvalidRatingException &e)
                {
                    cout << "\nException handled successfully: "
                         << e.getMessage() << endl;
                }
            }

            break;


        // ================= FILE I/O =================

        case 6:
            cout << "\n";
            cout << "============================================\n";
            cout << "             FILE RECORDS\n";
            cout << "============================================\n";

            cout << "\nSaving current records...\n";

            FileManager::saveRide(r1);
            FileManager::saveDriver(d1);
            FileManager::savePassenger(p1);

            cout << "\n========== SAVED DRIVERS ==========\n";

            FileManager::loadDrivers();

            cout << "\n========== SAVED PASSENGERS ==========\n";

            FileManager::loadPassengers();

            cout << "\n========== SAVED RIDES ==========\n";

            FileManager::loadRides();

            cout << "\nAll records processed successfully!\n";

            break;


        // ================= EXIT =================

        case 0:
            cout << "\n";
            cout << "============================================\n";
            cout << "   Thank you for using Ride Management\n";
            cout << "              System!\n";
            cout << "============================================\n";

            break;


        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}