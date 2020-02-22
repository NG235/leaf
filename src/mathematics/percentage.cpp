#include <iostream>

void percentage()
{
    long double whole, percentage;

    std::cout << "\nEnter whole ammount: ";
    std::cin >> whole;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter whole ammount: ";
        std::cin >> whole;
        err::cin.handle();
    }

    std::cout << "\nEnter percentage of whole ammount: ";
    std::cin >> percentage;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter percentage of whole ammount: ";
        std::cin >> percentage;
        err::cin.handle();
    }

    std::cout << "\nResult: " << (whole / 100) * percentage << "\n\n";
}