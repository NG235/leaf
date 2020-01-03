#include <stdio.h>
#include "types.h"
#include "coloredPrinting.h"
#include "calculators.c"
#include "converters.c"
#include "mathematics.c"

int main(void)
{
    green("\nWelcome to Leaf!\n\n");

    char categories[][100] = {
        "Calculators",
        "Converters",
        "Mathematics"};

    func functions[sizeof(categories)] = {
        &calculators,
        &converters,
        &mathematics};

    cyan("Categories:\n");
    for (int i = 0; i <= 2; i += 1)
    {
        printf("%d \t %s \n", i, categories[i]);
    }

    int category;
    yellow("\nEnter Category Number: ");
    scanf("%d", &category);

    while (category < 0 || category > sizeof(categories))
    {
        red("\nInvalid Category Number!\n");
        printf("\nEnter Category Number: ");
        scanf("%d", &category);
    }

    functions[category]();
}