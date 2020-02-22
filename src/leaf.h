#include <iostream>

namespace leaf
{

enum Color
{
    red,
    green,
    yellow,
    blue,
    magenta,
    cyan
};

class Cin
{
public:
    void reset()
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }
};

Cin cin = Cin();

void cpg(Color color, std::string output)
{
    switch (color)
    {
    case red:
        std::cout << "\033[0;31m" << output << "\033[0m"; break;
    case green:
        std::cout << "\033[0;32m" << output << "\033[0m"; break;
    case yellow:
        std::cout << "\033[0;33m" << output << "\033[0m"; break;
    case blue:
        std::cout << "\033[0;34m" << output << "\033[0m"; break;
    case magenta:
        std::cout << "\033[0;35m" << output << "\033[0m"; break;
    case cyan:
        std::cout << "\033[0;36m" << output << "\033[0m"; break;
    }
}

} // namespace leaf

typedef void (*func)();