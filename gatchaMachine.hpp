#ifndef _GATCHA_MACHINE_
#define _GATCHA_MACHINE_
#include "series.hpp"
#include "capsule.hpp"
#include <shellColor.hpp>
#include <vector>

class GatchaMachine : public ShellColor
{
private:
    Series theme;
    int capsuleCost;
    vector<Capsule **> capsules;
    vector<Capsule **> extraCapsules;

public:
    /*initialize -
    shellColor-
    string color*/
    GatchaMachine(Series conTheme, int conCapsuleCost, vector<Capsule **> conCapsules, vector<Capsule **> conExtraCapsules)
        : theme(conTheme),
          capsuleCost(conCapsuleCost), capsules(conCapsules),
          extraCapsules(conExtraCapsules)
    {
    }
    Capsule *RollForCapsule(int);
    int InsertCapsule(Capsule);

    ~GatchaMachine();
};

#endif