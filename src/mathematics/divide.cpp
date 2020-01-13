#include <iostream>

void divide()
{
    long double input1, input2;

    std::cout << "\nEnter whole number: ";
    std::cin >> input1;

    std::cout << "\nEnter number to divide by: ";
    std::cin >> input2;

    std::cout << "\nResult: " << input1 / input2 << "\n\n";
}