#include <iostream>

void sumRange()
{
    long double start, end;
    long sum = 0;

    std::cout << "\nEnter start of range: ";
    std::cin >> start;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter start of range: ";
        std::cin >> start;
    }

    leaf::cin.reset();

    std::cout << "\nEnter end of range: ";
    std::cin >> end;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter end of range: ";
        std::cin >> end;
    }

    std::cout << "\nResult: " << (start + end) * (end / 2) << "\n\n";
}