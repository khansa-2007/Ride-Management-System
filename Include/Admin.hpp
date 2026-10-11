#ifndef ADMIN_HPP
#define ADMIN_HPP

#include "User.hpp"

class Admin : public User
{
private:
    string role;

public:
    Admin(int id, string n, string p, string r);

    void displayProfile() const override;
    void displayAdminProfile() const;
    string getRole() const;
};

#endif