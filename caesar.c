#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char l, int s);
//int argc = how many words a person typed in the command line
//string argv (string argument vector) = an array of all strings a person types in the command line

int main(int argc, string argv[])
{
    if (argc > 2 || argc < 2 || only_digits(argv[1]) == 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int integer = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");
    int length = strlen(plaintext);
    printf("ciphertext: ");
    for (int i = 0; i < length; i++)
    {
        plaintext[i] = rotate(plaintext[i], integer);
        printf("%c", plaintext[i]);
    }
    printf("\n");
}

bool only_digits(string s)
{
    int n = strlen(s);
    bool result = 0;
    for (int i = 0; i < n; i++)
    {
        if (! isdigit(s[i]))
        {
            result = false;
        }
        else
        {
            result = true;
        }
    }
    return result;
}

char rotate(char l, int s)
{
    if (! isalpha(l))
    {
        return l;
    }
    else
    {
        if (isupper(l))
        {
            l =  ((((int)l - 65) + s) % 26) + 65;
            /*int n = (int) l;
            n -= 65;
            n = (n + s) % 26;
            n += 65;
            l = (char) n; */
        }
        else if (islower(l))
        {
            l =  ((((int)l - 97) + s) % 26) + 97;
            /*int r = (int) l;
            r -= 97;
            r = (r + s) % 26;
            r += 97;
            l = (char) r; */
        }
        else //if (! isupper(l) || ! islower(l))
        {
            return l;
        }
    }
    return l;
}