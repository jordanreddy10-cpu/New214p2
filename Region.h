#ifndef REGION_H
#define REGION_H

#include "Place.h"
#include <vector>

class Region : public Place {
private:
    std::vector<Place*> places; 

public:
    Region(std::string name);
    ~Region() override;
    void addPlace(Place* place);
    void print() const override; 
};

#endif // REGION_H