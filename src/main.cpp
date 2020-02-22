#include <iostream>
#include "leaf.h"
#include "calculators.cpp"
#include "converters.cpp"
#include "mathematics.cpp"

using std::string;

int main()
{
    int category;

    leaf::cpg(leaf::green, "\nWelcome to Leaf!\n\n");

    string categories[] = {
        "Calculators",
        "Converters",
        "Mathematics"};

    func functions[] = {
        &calculators,
        &converters,
        &mathematics};

    leaf::cpg(leaf::cyan, "Categories:\n");
    for (int i = 0; i <= 2; ++i)
    {
        std::cout << i << "\t" << categories[i] << std::endl;
    }

    leaf::cpg(leaf::yellow, "\nEnter Category Number: ");
    std::cin >> category;

    while (std::cin.fail() || category < 0 || category > 2)
    {
        leaf::cin.reset();

        leaf::cpg(leaf::red, "\nInvalid Category Number!\n");

        leaf::cpg(leaf::cyan, "\nCategories:\n");
        for (int i = 0; i <= 2; ++i)
        {
            std::cout << i << "\t" << categories[i] << std::endl;
        }

        leaf::cpg(leaf::yellow, "\nEnter Category Number: ");
        std::cin >> category;
    }

    leaf::cin.reset();
    functions[category]();

    return 0;
}
