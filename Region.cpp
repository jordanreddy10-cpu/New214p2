#include "Region.h"
using namespace std;

Region::Region(std::string name) : Place(name) {};

Region::~Region() 
{
    for (const auto* ptr : this->places)
    {
        if (ptr)
        {
            delete ptr;
        }
    }
}

void Region::addPlace(Place* place)
{
    this->places.push_back(place);
}


void Region::print() const
{
    std::cout << "You're in the region " << this->name << "!\n";
    for (const auto* ptr : this->places)
    {
        if (ptr)
        {
            ptr->print();
        }
    }
}
