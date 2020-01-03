#include <stdio.h>

void factorial()
{
    long input, result = 1;

    printf("\nEnter number to calculate factorial of: ");
    scanf("%li", &input);

    for (long i = 1; i <= input; ++i)
    {
        result *= i;
    }

    printf("\nResult: %li\n", result);
}