#include <iostream>

void add()
{
    long double input1, input2;

    std::cout << "\nEnter first number to add: ";
    std::cin >> input1;

    std::cout << "\nEnter second number to add: ";
    std::cin >> input2;

    std::cout << "\nResults: " << input1 + input2 << "\n\n";
}