#include "../include/Rating.hpp"

Rating::Rating(int r, string c)
{
    rating = r;
    comment = c;
}

void Rating::setRating(int r)
{
    rating = r;
}

void Rating::setComment(string c)
{
    comment = c;
}

int Rating::getRating() const
{
    return rating;
}

string Rating::getComment() const
{
    return comment;
}

void Rating::displayRating() const
{
    cout << "\n--- Rating Information ---" << endl;
    cout << "Rating: " << rating << "/5" << endl;
    cout << "Comment: " << comment << endl;
}