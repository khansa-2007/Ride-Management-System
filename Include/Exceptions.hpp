#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <iostream>
#include <string>

using namespace std;

class InvalidRatingException
{
private:
    string message;

public:
    InvalidRatingException(string msg)
    {
        message = msg;
    }

    string getMessage() const
    {
        return message;
    }
};

class InvalidRideException
{
private:
    string message;

public:
    InvalidRideException(string msg)
    {
        message = msg;
    }

    string getMessage() const
    {
        return message;
    }
};

#endif