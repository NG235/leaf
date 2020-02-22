#include <iostream>
#include "calculators.h"

using std::string;

void calculators()
{
    int item;

    string items[] = {
        "BMI (Body Mass Index)",
        "Tax"};
        
    func functions[] = {
        &bmi,
        &tax};

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