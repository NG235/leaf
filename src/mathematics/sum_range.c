#include <stdio.h>

void sumRange()
{
    long double start, end;

    printf("\nEnter start of range: ");
    scanf("%Lf", &start);

    printf("\nEnter end of range: ");
    scanf("%Lf", &end);

    long sum = 0;

    for (long i = start; i <= end; i++)
    {
        sum += i;
    }

    printf("\nResult: %.1Lf\n", (start + end) * (end / 2));
}