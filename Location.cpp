#include "Location.h"


Location::Location(std::string name, bool road, bool planes) : Place(name)
{
    this->name = name;
    this->hasRoad = road;
    this->hasPlanes = planes;
}

Location::~Location() {};


void Location::print() const
{
    std::cout << "You're in the location " << this->name << "!\n";
}

bool Location::getPlanes()
{
    return this->hasPlanes;
}
bool Location::getRoad()
{
    return this->hasRoad;
}