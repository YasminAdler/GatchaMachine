#ifndef _FIGURE_
#define _FIGURE_
#include "series.hpp"
#include "capsule.hpp"

class Figure : public Capsule
{
private:
    Series theme;

public:
    /*capsule -
    string name
    int worth
    Rarity rarity;
    CapsuleType *type */
    Figure();
    Series virtual getCatagory() = 0;
    ~Figure();
};

#endif