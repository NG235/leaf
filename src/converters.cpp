#include <iostream>
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

    leaf::cpg(leaf::cyan, "\nItems:\n");
    for (int i = 0; i <= 1; ++i)
    {
        std::cout << i << "\t" << items[i] << std::endl;
    }

    leaf::cpg(leaf::yellow, "\nEnter Item Number: ");
    std::cin >> item;

    while (std::cin.fail() || item < 0 || item > 1)
    {
        leaf::cin.reset();

        leaf::cpg(leaf::red, "\nInvalid Item Number!\n");

        leaf::cpg(leaf::cyan, "\nItems:\n");
        for (int i = 0; i <= 1; ++i)
        {
            std::cout << i << "\t" << items[i] << std::endl;
        }

        leaf::cpg(leaf::yellow, "\nEnter Item Number: ");
        std::cin >> item;
    }

    leaf::cin.reset();
    functions[item]();
}