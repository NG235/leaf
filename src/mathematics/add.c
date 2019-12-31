#include <stdio.h>

void add()
{
    float input1, input2;

    printf("\nEnter first number to add: ");
    scanf("%f", &input1);

    printf("\nEnter second number to add: ");
    scanf("%f", &input2);

    printf("\nResult: %f\n", input1 + input2);
}