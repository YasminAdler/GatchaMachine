#ifndef __EDIBLE__
#define __EDIBLE__
using namespace std;
#include <string>
#include "capsule.hpp"

class Edible : public Capsule
{
private:
    string flavor;

public:
    /*capsule -
    string name
    int worth
    Rarity rarity;
    CapsuleType *type */
    Edible();
    string virtual getFlavor() = 0;
};

#endif