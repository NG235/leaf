#include <iostream>

void add()
{
    long double input1, input2;

    std::cout << "\nEnter first number to add: ";
    std::cin >> input1;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter first number to add: ";
        std::cin >> input1;
    }

    leaf::cin.reset();

    std::cout << "\nEnter second number to add: ";
    std::cin >> input2;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter second number to add: ";
        std::cin >> input2;
        leaf::cin.reset();
    }

    std::cout << "\nResults: " << input1 + input2 << "\n\n";
}