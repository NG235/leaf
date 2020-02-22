#include <iostream>

void bmi()
{
    float weight, height;

    std::cout << "\nEnter weight (kg): ";
    std::cin >> weight;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter weight (kg): ";
        std::cin >> weight;
    }

    leaf::cin.reset();

    std::cout << std::endl
              << "Enter height (m): ";
    std::cin >> height;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter height (m): ";
        std::cin >> height;
    }

    std::cout << "\nResult: " << weight / (height * height) << "\n\n";
}