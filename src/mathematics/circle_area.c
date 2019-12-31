#include <stdio.h>
#include <math.h>

void circleArea()
{
    long double radius;

    printf("\nEnter circle radius: ");
    scanf("%Lf", &radius);

    printf("\nResult: %.2Lf\n", M_PI * (radius * radius));
}