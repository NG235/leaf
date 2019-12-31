#include <stdio.h>

void add()
{
    long double input1, input2;

    printf("\nEnter first number to add: ");
    scanf("%Lf", &input1);

    printf("\nEnter second number to add: ");
    scanf("%Lf", &input2);

    printf("\nResult: %.2Lf\n", input1 + input2);
}