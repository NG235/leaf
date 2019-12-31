#include <stdio.h>

#include "calculators/bmi.c"
#include "calculators/tax.c"

void calculators()
{
    char items[2][100] = {
        "BMI (Body Mass Index)",
        "Tax"};

    cyan("\nItems:\n");
    for (int i = 0; i <= 1; i += 1)
    {
        printf("%d \t %s \n", i, items[i]);
    }

    int item;
    yellow("\nEnter Item Number: ");
    scanf("%d", &item);

    while (item < 0 || item > 1)
    {
        red("\nInvalid Item Number!\n");
        printf("\nEnter Item Number: ");
        scanf("%d", &item);
    }

    if (item == 0)
    {
        bmi();
    }
    else if (item == 1)
    {
        tax();
    }
}