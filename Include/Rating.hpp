#ifndef RATING_HPP
#define RATING_HPP

#include <iostream>
#include <string>

using namespace std;

class Rating
{
private:
    int rating;
    string comment;

public:
    Rating(int r, string c);

    void setRating(int r);
    void setComment(string c);

    int getRating() const;
    string getComment() const;

    void displayRating() const;
};

#endif