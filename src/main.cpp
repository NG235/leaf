#include <iostream>
#include "types.h"
#include "functions.h"

using std::string;

int main()
{
    int category;

    green("\nWelcome to Leaf!\n\n");

    string categories[] = {
        "Calculators",
        "Converters",
        "Mathematics"};

    func functions[] = {
        &calculators,
        &converters,
        &mathematics};

    cyan("Categories:\n");
    for (int i = 0; i <= 2; ++i)
    {
        std::cout << i << "\t" << categories[i] << std::endl;
    }

    yellow("\nEnter Category Number: ");
    std::cin >> category;

    while (std::cin.fail() || category < 0 || category > 2)
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        red("\nInvalid Category Number!\n");

        cyan("\nCategories:\n");
        for (int i = 0; i <= 2; ++i)
        {
            std::cout << i << "\t" << categories[i] << std::endl;
        }

        yellow("\nEnter Category Number: ");
        std::cin >> category;
    }

    functions[category]();

    return 0;
}
