#include <iostream>

void subtract()
{
    long double input1, input2;

    std::cout << "\nEnter number to subtract from: ";
    std::cin >> input1;

    std::cout << "\nEnter number to subtract: ";
    std::cin >> input2;

    std::cout << "\nResult: " << input1 - input2 << "\n\n";
}