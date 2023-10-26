#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot
{
public:    
    Spot(int x, int y, char category);
    std::tuple<int, int> getLoc();
    char getCategory();
    void setLoc(int x, int y);
    virtual void setCategory(char category);
    virtual bool isOperative();
protected:
    std::tuple<int, int> location;
    char category;
};

#endif