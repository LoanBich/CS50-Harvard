#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompting for input: heigh
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // building pyramid
    int i;
    for (i = 1; i <= height; i++)
    {
        // print space
        int a = 1;
        int space = height - i;
        while (a <= space)
        {
            printf(" ");
            a++;
        }

        // print hashes
        int b;
        for (b = 1; b <= i; b++)
        {
            printf("#");
        }
        printf("\n");
    }
}
