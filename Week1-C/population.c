#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int a;
    do
    {
        a = get_int("Start size: ");
    }
    while (a < 9);

    // TODO: Prompt for end size
    int b;
    do
    {
        b = get_int("End size: ");
    }
    while (b < a);

    // TODO: Calculate number of years until we reach threshold
    int year = 0;
    while (a < b)
    {
        a = a + a / 3 - a / 4;
        year = year + 1;
    }

    // TODO: Print number of years
    printf("Years: %i \n", year);
}
