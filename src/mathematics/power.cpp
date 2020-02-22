#include <iostream>
#include <cmath>

void power()
{
    long double base, power;

    std::cout << "\nEnter the base: ";
    std::cin >> base;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << std::endl
                  << "Enter the base: ";
        std::cin >> base;
    }

    leaf::cin.reset();

    std::cout << std::endl
              << "Enter the power: ";
    std::cin >> power;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "Enter the power: ";
        std::cin >> power;
    }

    std::cout << "\nResult: " << pow(base, power) << "\n\n";
}