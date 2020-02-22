#include <iostream>

void square()
{
    long double input;

    std::cout << "\nEnter number to square: ";
    std::cin >> input;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter number to square: ";
        std::cin >> input;
        err::cin.handle();
    }

    std::cout << "\nResult: " << input * input << "\n\n";
}