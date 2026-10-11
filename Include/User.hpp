#ifndef USER_HPP
#define USER_HPP

#include <string>
using namespace std;

class User {
private:
    int userId;
    string name;
    string phone;

public:
    User(int id, string n, string p);

    virtual void displayProfile() const = 0;

    int getUserId() const;
    string getName() const;
    string getPhone() const;
};

#endif