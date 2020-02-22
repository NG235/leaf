#include <iostream>

void percentage()
{
    long double whole, percentage;

    std::cout << "\nEnter whole ammount: ";
    std::cin >> whole;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter whole ammount: ";
        std::cin >> whole;
    }

    leaf::cin.reset();

    std::cout << "\nEnter percentage of whole ammount: ";
    std::cin >> percentage;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter percentage of whole ammount: ";
        std::cin >> percentage;
    }

    std::cout << "\nResult: " << (whole / 100) * percentage << "\n\n";
}