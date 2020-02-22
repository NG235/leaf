#include <iostream>

void squareArea()
{
    long double side;

    std::cout << "\nEnter the length of one side: ";
    std::cin >> side;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter the length of one side: ";
        std::cin >> side;
    }

    std::cout << "\nResult" << side * side << "\n\n";
}