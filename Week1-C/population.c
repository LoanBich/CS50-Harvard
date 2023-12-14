// Determine how long it takes for a population to reach a particular size.
// Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.
// For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.

// input: 1. start size of population
//        2. end size of population
// output: the number of years population can reach end size from start size

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
