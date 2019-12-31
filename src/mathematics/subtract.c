#include <stdio.h>

void subtract()
{
    long double input1, input2;

    printf("\nEnter starting number: ");
    scanf("%Lf", &input1);

    printf("\nEnter number to subtract: ");
    scanf("%Lf", &input2);

    printf("\nResult: %.2Lf\n", input1 - input2);
}