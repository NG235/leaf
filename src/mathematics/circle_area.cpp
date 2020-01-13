#include <iostream>
#include <math.h>

void circleArea()
{
    long double radius;

    std::cout << "\nEnter circle radius: ";
    std::cin >> radius;

    std::cout << "\nResult: " << M_PI * (radius * radius) << "\n\n";
}