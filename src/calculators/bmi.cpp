#include <iostream>

void bmi()
{
    float weight, height;

    std::cout << std::endl << "Enter weight (kg): ";
    std::cin >> weight;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << std::endl << "Enter weight (kg): ";
        std::cin >> weight;
    }

    leaf::cin.reset();

    std::cout << std::endl << "Enter height (m): ";
    std::cin >> height;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << std::endl << "Enter height (m): ";
        std::cin >> height;
    }

    std::cout << "\nResult: " << weight / (height * height) << "\n\n";
}