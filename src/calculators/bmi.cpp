#include <iostream>

void bmi()
{
    float weight, height;

    std::cout << std::endl << "Enter weight (kg): ";
    std::cin >> weight;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << std::endl << "Enter weight (kg): ";
        std::cin >> weight;
        err::cin.handle();
    }

    std::cout << std::endl << "Enter height (m): ";
    std::cin >> height;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << std::endl << "Enter height (m): ";
        std::cin >> height;
        err::cin.handle();
    }

    std::cout << "\nResult: " << weight / (height * height) << "\n\n";
}