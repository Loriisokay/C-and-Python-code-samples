#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    while (true)
    {
        height = get_int("Height:\n");

        if (height > 0 && height < 9)
        {
            break;
        }
    }

    //rows
    for (int i = 0; i < height; i++)
    {
        //empty space
        for (int k = height - 1; k > i; k--)
        {
            printf(" ");
        }
        //columns
        for (int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}