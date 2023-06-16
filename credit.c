#include <cs50.h>
#include <stdio.h>
#define N

long recieve_number(void);

int main(void)
{

}

long recieve_number (void)
{
    long number;
    number = get_long("Number: ");
    return number;
}

long checksum (long number)
{
    int luhn[N], i;
    for (i = 0; i < N; ++i)
    {
        lihn[i] = number %10;
        number /=100;
    }
    printf ("%i", number);
    return number;
}


