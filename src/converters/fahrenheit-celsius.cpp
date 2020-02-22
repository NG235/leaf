#include <iostream>

void fahrenheitCelsius()
{
    float input;

    std::cout << "\nEnter temperature to convert (f): ";
    std::cin >> input;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter temperature to convert (f): ";
        std::cin >> input;
        err::cin.handle();
    }

    std::cout << "\nResult (c): " << (input - 32) * 5/9 << "\n\n";
}