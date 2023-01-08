#ifndef __CAPSULE__
#define __CAPSULE__
#include "rarity.hpp"
#include "capsuleType.hpp"
#include <string>

using namespace std;

class Capsule : public ShellColor
{
private:
    string name;
    int worth;
    Rarity rarity;
    CapsuleType *type;

public:
    /*initialize -
    shellColor-
    string color*/
    Capsule(string conColor, string conName, int conWorth, Rarity conRarity, CapsuleType *conType)
        : color(conColor) name(conName), worth(conWorth), rarity(conRarity), type(conType)
    {
    }
    float virtual CalculateRarity() = 0;
    CapsuleType virtual getType() = 0;
    string virtual getName() = 0;
};

#endif