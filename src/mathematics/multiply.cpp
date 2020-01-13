#include <iostream>

void multiply()
{
    long double input1, input2;

    std::cout << "\nEnter first number to multiply: ";
    std::cin >> input1;

    std::cout << "\nEnter second number to multiply: ";
    std::cin >> input2;

    std::cout << "\nResult: " << input1 * input2 << "\n\n";
}