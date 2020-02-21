#include <iostream>
#include "types.h"
#include "calculators.h"
#include "cpg.h"

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

    cpg::cyan("\nItems:\n");
    for (int i = 0; i <= 1; ++i)
    {
        std::cout << i << "\t" << items[i] << std::endl;
    }

    cpg::yellow("\nEnter Item Number: ");
    std::cin >> item;

    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    while (std::cin.fail() || item < 0 || item > 1)
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        cpg::red("\nInvalid Item Number!\n");

        cpg::cyan("\nItems:\n");
        for (int i = 0; i <= 1; ++i)
        {
            std::cout << i << "\t" << items[i] << std::endl;
        }

        cpg::yellow("\nEnter Item Number: ");
        std::cin >> item;

        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }

    functions[item]();
}