#include <iostream>

void rectangleArea()
{
    long double side1, side2;

    std::cout << "\nEnter the length of one side: ";
    std::cin >> side1;

    std::cout << "Enter the length of a different side: ";
    std::cin >> side2;

    std::cout << "\nResult: " << side1 * side2 << "\n\n";
}