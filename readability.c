#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //get a text
    string text = get_string("Text:\n");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    float l = (float) letters / words * 100;
    float s = (float) sentences / words * 100;
    //let's count the index!
    float index = 0.0588 * l - 0.296 * s - 15.8;
    //let's print the results!
    if (index >= 1 && index <= 16)
    {
        printf("Grade %i\n", (int) round(index));
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
}

int count_letters(string text) //let's count letters
{
    int n = strlen(text);
    int countl = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(text[i]))
        {
            countl++;
        }
    }
    //printf("%i\n", countl);
    return countl;
}

int count_words(string text) //let's count words
{
    int n = strlen(text);
    int countw = 1;
    for (int i = 0; i < n; i++)
    {
        if (isspace(text[i]))
        {
            countw++;
        }
    }
    //printf("%i\n", countw);
    return countw;
}

int count_sentences(string text) // let's count sentences
{
    int n = strlen(text);
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        if (text[i] == 46 || text[i] == 33 || text[i] == 63)
        {
            counts++;
        }
    }
    //printf("%i\n", counts);
    return counts;
}


