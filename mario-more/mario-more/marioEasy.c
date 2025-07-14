#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = 0;
    do
    {
        h = get_int("Height ");
    }
    while(h<=0 || h>8);

    for (int row = 0; row < h; row++ )
    {
        for (int col = -row; col < 1;col++)
        {
            printf("#");
        }
            printf("\n");
    }
}
