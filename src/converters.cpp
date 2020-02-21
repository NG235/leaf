#include <iostream>
#include "types.h"
#include "converters.h"

using std::string;

void converters()
{
    int item;

    string items[] = {
        "Celsius to Fahrenheit",
        "Fahrenheit to Celsius"};

    func functions[] = {
        &celsiusFahrenheit,
        &fahrenheitCelsius};

    cyan("\nItems:\n");
    for (int i = 0; i <= 1; ++i)
    {
        std::cout << i << "\t" << items[i] << std::endl;
    }

    yellow("\nEnter Item Number: ");
    std::cin >> item;

    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    while (std::cin.fail() || item < 0 || item > 1)
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        red("\nInvalid Item Number!\n");

        cyan("\nItems:\n");
        for (int i = 0; i <= 1; ++i)
        {
            std::cout << i << "\t" << items[i] << std::endl;
        }

        yellow("\nEnter Item Number: ");
        std::cin >> item;

        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }

    functions[item]();
}