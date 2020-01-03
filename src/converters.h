#include <stdio.h>
#include "types.h"

#include "converters/celsius-fahrenheit.c"
#include "converters/fahrenheit-celsius.c"

void converters()
{
    char items[2][100] = {
        "Celsius to Fahrenheit",
        "Fahrenheit to Celsius"};

    func functions[sizeof(items)] = {
        &celsiusFahrenheit,
        &fahrenheitCelsius};

    cyan("\nItems:\n");
    for (int i = 0; i <= 1; i += 1)
    {
        printf("%d \t %s \n", i, items[i]);
    }

    int item;
    yellow("\nEnter Item Number: ");
    scanf("%d", &item);

    while (item < 0 || item > sizeof(items))
    {
        red("\nInvalid Item Number!\n");
        printf("\nEnter Item Number: ");
        scanf("%d", &item);
    }

    functions[item]();
}