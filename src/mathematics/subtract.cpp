#include <iostream>

void subtract()
{
    long double input1, input2;

    std::cout << "\nEnter number to subtract from: ";
    std::cin >> input1;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter number to subtract from: ";
        std::cin >> input1;
        err::cin.handle();
    }

    std::cout << "\nEnter number to subtract: ";
    std::cin >> input2;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter number to subtract: ";
        std::cin >> input2;
        err::cin.handle();
    }

    std::cout << "\nResult: " << input1 - input2 << "\n\n";
}