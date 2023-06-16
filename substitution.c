#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_valid(string s);
bool has_duplicates(string s);


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    if (only_valid(argv[1]) == 0)
    {
        printf("Key must contain only alphabetic characters.\n");
        return 1;
    }

    if (has_duplicates(argv[1]))
    {
        printf("Key must not contain repeated characters.\n");
        return 1;
    }


    string plaintext = get_string("plaintext: ");
    int inalphabet = 0;
    printf("ciphertext: ");
    for (int i = 0, l = strlen(plaintext); i < l; i++)
    {
        if (isupper(plaintext[i]))
        {
            inalphabet = (int) plaintext[i] - 'A';
            plaintext[i] = toupper(argv[1][inalphabet]);
        }
        else if (islower(plaintext[i]))
        {
            inalphabet = (int) plaintext[i] - 'a';
            plaintext[i] = tolower(argv[1][inalphabet]);
        }
        printf("%c", plaintext[i]);
    }
    printf("\n");
}



bool only_valid(string s) //check if a key has valid characters
{
    int n = strlen(s);
    bool result = 1;
    for (int i = 0; i < n; i++)
    {
        if (! isalpha(s[i]))
        {
            result = false;
            return result;
        }
        else
        {
            result = true;
        }
    }
    return result;
}



bool has_duplicates(string s) // check for duplicates
{
    bool check = false;
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (tolower(s[i]) == tolower(s[j]))
            {
                check = true;
            }
        }
    }
    return check;
}
