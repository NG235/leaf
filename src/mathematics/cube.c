#include <stdio.h>

void cube()
{
    long double input;

    printf("\nEnter number to cube: ");
    scanf("%Lf", &input);

    printf("\nResult: %.2Lf\n", input * input * input);
}