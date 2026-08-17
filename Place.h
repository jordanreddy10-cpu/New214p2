#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <iostream>

class Place {
protected:
    std::string name;

public:
    Place(std::string placeName);
    virtual ~Place();
    virtual void print() const = 0; 
    std::string getName();
};

#endif // PLACE_H