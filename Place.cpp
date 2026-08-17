#include "Place.h"

Place::~Place()
{}

Place::Place(std::string s)
{
    this->name = s;
}

std::string Place::getName()
{
    return this->name;
}