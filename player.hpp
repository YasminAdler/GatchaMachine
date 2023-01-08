#ifndef __PLAYER__
#define __PLAYER__
#include <string>
#include <vector>
#include "capsule.hpp"
#include "gatchaMachine.hpp"
using namespace std;

class Player
{
private:
    string name;
    int money;
    vector<Capsule **> capsuleWon;
    
public:
    Player(/* args */);

    void PlayMachine(GatchaMachine);
    int CalculateEarnings();
    ~Player();
};

#endif