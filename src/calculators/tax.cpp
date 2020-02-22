#include <iostream>

void tax()
{
    int income;
    float rate, tax;

    std::cout << "\nEnter your taxable income: $";
    std::cin >> income;
    err::cin.handle();

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter your taxable income: $";
        std::cin >> income;
        err::cin.handle();
    }

    std::cout << "\nEnter your tax rate: ";
    std::cin >> rate;

    while (std::cin.fail())
    {
        err::cin.handle();

        std::cout << "\033[0;31m" << "\nInvalid Input\n" << "\033[0m";

        std::cout << "\nEnter your tax rate: ";
        std::cin >> rate;
        err::cin.handle();
    }

    tax = (income / 100) * rate;

    std::cout << "\nYou will pay the following in tax: " << tax << "\n\n";
}