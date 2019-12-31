#include <stdio.h>

#include "coloredPrinting.h"
#include "calculators.h"
#include "converters.h"
#include "mathematics.h"

int main(void)
{
    green("\nWelcome to Leaf!\n\n");

    char categories[3][100] = {
        "Calculators",
        "Converters",
        "Mathematics"};

    cyan("Categories:\n");
    for (int i = 0; i <= 2; i += 1)
    {
        printf("%d \t %s \n", i, categories[i]);
    }

    int category;
    yellow("\nEnter Category Number: ");
    scanf("%d", &category);

    while (category < 0 || category > 2)
    {
        red("\nInvalid Category Number!\n");
        printf("\nEnter Category Number: ");
        scanf("%d", &category);
    }

    if (category == 0)
    {
        calculators();
    }
    else if (category == 1)
    {
        converters();
    }
    else if (category == 2)
    {
        mathematics();
    }
}