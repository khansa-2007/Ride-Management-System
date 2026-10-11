#include "../include/User.hpp"

User::User(int id, string n, string p) {
    userId = id;
    name = n;
    phone = p;
}

int User::getUserId() const {
    return userId;
}

string User::getName() const {
    return name;
}

string User::getPhone() const {
    return phone;
}