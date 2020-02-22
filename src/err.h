#include <iostream>

namespace err
{
class Cin
{
public:
    void handle()
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }
};

Cin cin = Cin();
}