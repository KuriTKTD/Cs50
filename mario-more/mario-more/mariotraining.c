#include <cs50.h>
#include <stdio.h>

void printVar(char varName, int num);

int main(void)
{
    for (int i = 0; i < 8; i++)
    {
        int j;
        for (j = -i; j < 1; j++)
        {
            printf("#");
            printVar('j',j);
            printVar('i',i);
        }
                    printf("\n");
    }
}

void printVar(char varName, int num)
{
    printf("Int %c is %d", varName, num);
}
