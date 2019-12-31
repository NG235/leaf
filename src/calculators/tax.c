#include <stdio.h>

void tax()
{
    int income, rate;

    printf("\nEnter your taxable income: $");
    scanf("%d", &income);

    printf("\nEnter your tax rate: ");
    scanf("%d", &rate);

    int tax = (income / 100) * rate;

    printf("\nYou will pay the following in tax: $%d\n", tax);
}