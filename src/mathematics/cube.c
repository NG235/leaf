#include <stdio.h>

void cube()
{
    float input;

    printf("\nEnter number to cube: ");
    scanf("%f", &input);

    printf("\nResult: %f\n", input * input * input);
}