#include <iostream>

void bmi()
{
    float weight, height;

    std::cout << std::endl << "Enter weight (kg): ";
    std::cin >> weight;

    std::cout << std::endl << "Enter height (m): ";
    std::cin >> height;

    std::cout << "\nResult: " << weight / (height * height) << "\n\n";
}