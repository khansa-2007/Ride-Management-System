#include "../include/Admin.hpp"
#include <iostream>

using namespace std;

Admin::Admin(int id, string n, string p, string r)
    : User(id, n, p)
{
    role = r;
}

void Admin::displayProfile() const
{
    cout << "\n--- Admin Profile ---" << endl;
    cout << "Admin ID: " << getUserId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Phone: " << getPhone() << endl;
    cout << "Role: " << role << endl;
}

void Admin::displayAdminProfile() const
{
    cout << "\n--- Admin Information ---" << endl;

    cout << "Admin ID: " << getUserId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Phone: " << getPhone() << endl;
    cout << "Role: " << role << endl;
}

string Admin::getRole() const
{
    return role;
}