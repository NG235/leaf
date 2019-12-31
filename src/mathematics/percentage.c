#include <stdio.h>

void percentage()
{
    long double whole, percentage;

    printf("\nEnter whole ammount: ");
    scanf("%Lf", &whole);

    printf("\nEnter percentage of whole ammount: ");
    scanf("%Lf", &percentage);

    printf("\nResult: %.2Lf\n", (whole / 100) * percentage);
}