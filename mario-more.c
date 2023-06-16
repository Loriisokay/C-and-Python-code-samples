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
        //empty space between rows
        for (int l = 0; l < 1; l++)
        {
            printf("  ");
        }
        //one more pyramid
        for (int m = -1; m < i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}