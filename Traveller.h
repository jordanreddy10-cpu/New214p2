#ifndef TRAVELLER_H
#define TRAVELLER_H

#include <string>

class MoveState;
class Trip;
class Place;

class Traveller {
private:
    MoveState* state;
    Place* location;
    std::string name;
    Trip* route;

public:
    // Constructor 
    Traveller(MoveState* x, Trip* y, Place* z, std::string name);

    // Destructor: 
    ~Traveller();

    //allows move() to be delegated 
    void move();

    Place* getLocation() const;
    Trip* getRouteStrat() const; 
    std::string getName() const;

    void setState(MoveState* state);
    void setLocation(Place* location);
    void setTrip(Trip* route);
};

#endif