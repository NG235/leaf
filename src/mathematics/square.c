#include <stdio.h>

void square()
{
    float input;

    printf("\nEnter number to square: ");
    scanf("%f", &input);

    printf("\nResult: %f\n", input * input);
}