#include <stdio.h>

void percentage()
{
    float whole, percentage;

    printf("\nEnter whole ammount: ");
    scanf("%f", &whole);

    printf("\nEnter percentage of whole ammount: ");
    scanf("%f", &percentage);

    printf("\nResult: %f\n", (whole / 100) * percentage);
}