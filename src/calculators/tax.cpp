#include <iostream>

void tax()
{
    int income;
    float rate, tax;

    std::cout << "\nEnter your taxable income: $";
    std::cin >> income;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter your taxable income: $";
        std::cin >> income;
    }

    leaf::cin.reset();

    std::cout << "\nEnter your tax rate: ";
    std::cin >> rate;

    while (std::cin.fail())
    {
        leaf::cin.reset();

        leaf::iiw();

        std::cout << "\nEnter your tax rate: ";
        std::cin >> rate;
    }

    tax = (income / 100) * rate;

    std::cout << "\nYou will pay the following in tax: " << tax << "\n\n";
}