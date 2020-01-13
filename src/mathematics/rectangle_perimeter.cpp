#include <iostream>

void rectanglePerimeter()
{
    long double side1, side2;

    std::cout << "\nEnter the length of one side: ";
    std::cin >> side1;

    std::cout << "\nEnter the length of another side: ";
    std::cin >> side2;

    std::cout << "\nResult: " << (side1 * 2) + (side2 * 2) << "\n\n";
}