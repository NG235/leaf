#include <iostream>

void rectangleArea()
{
    long double side1, side2;

    std::cout << "\nEnter the length of one side: ";
    std::cin >> side1;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter the length of one side: ";
        std::cin >> side1;
    }

    leaf::cin.reset();

    std::cout << "\nEnter the length of a different side: ";
    std::cin >> side2;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter the length of a different side: ";
        std::cin >> side2;
    }

    std::cout << "\nResult: " << side1 * side2 << "\n\n";
}