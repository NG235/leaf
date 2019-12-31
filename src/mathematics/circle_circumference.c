#include <stdio.h>
#include <math.h>

void circleCircumference()
{
    long double radius;

    printf("\nEnter circle radius: ");
    scanf("%Lf", &radius);

    printf("\nResult: %.2Lf\n", 2 * M_PI * radius);
}