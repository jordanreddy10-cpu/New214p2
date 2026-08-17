#ifndef LOCATION_H
#define LOCATION_H

#include "Place.h"

class Location : public Place {

private: 
    bool hasRoad;
    bool hasPlanes;
    std::string name;
public:
    Location(std::string name, bool road, bool planes);
    ~Location() override;
    void print() const override;
    bool getPlanes();
    bool getRoad();
};

#endif // LOCATION_H