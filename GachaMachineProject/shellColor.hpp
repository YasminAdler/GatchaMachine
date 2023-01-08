#ifndef __SHELL_COLOR__
#define __SHELL_COLOR__
#include <string>
using namespace std;

class ShellColor
{
private:
    string color;

public:
    int virtual getColor() = 0;
};

#endif