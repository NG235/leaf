#include <stdio.h>

void square()
{
    long double input;

    printf("\nEnter number to square: ");
    scanf("%Lf", &input);

    printf("\nResult: %.2Lf\n", input * input);
}