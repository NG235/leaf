#include <iostream>

void celsiusFahrenheit()
{
    float input;

    std::cout << "\nEnter temperature to convert (c): ";
    std::cin >> input;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter temperature to convert (c): ";
        std::cin >> input;
        err::cin.handle();
    }

    std::cout << "\nResult (f): " << (input * 9/5) + 32 << "\n\n";
}