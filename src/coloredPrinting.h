#include <stdio.h>

void red(char input[100])
{
    printf("\033[0;31m");
    printf("%s", input);
    printf("\033[0m");
}

void green(char input[100])
{
    printf("\033[0;32m");
    printf("%s", input);
    printf("\033[0m");
}

void yellow(char input[100])
{
    printf("\033[0;33m");
    printf("%s", input);
    printf("\033[0m");
}

void blue(char input[100])
{
    printf("\033[0;34m");
    printf("%s", input);
    printf("\033[0m");
}

void megenta(char input[100])
{
    printf("\033[0;35m");
    printf("%s", input);
    printf("\033[0m");
}


void cyan(char input[100])
{
    printf("\033[0;36m");
    printf("%s", input);
    printf("\033[0m");
}