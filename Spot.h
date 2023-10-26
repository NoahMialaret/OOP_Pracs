#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot
{
public:    
    Spot(int x, int y, char category)
        :
        location({x, y}),
        category(category)
    {}

    std::tuple<int, int> getLoc()
    {
        return location;
    }

    char getCategory()
    {
        return category;
    }

    void setLoc(int x, int y)
    {
        location = {x, y};
    }

    virtual void setCategory(char _category)
    {
        category = _category;
    }

    virtual bool isOperative()
    {
        return false;
    }

protected:
    std::tuple<int, int> location;
    char category;
};

#endif