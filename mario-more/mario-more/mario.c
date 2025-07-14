#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h <= 0 || h > 8);

    for (int i = h; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = (i - 1); j < h; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = (i - 1); j < h; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
