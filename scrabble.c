#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
//char letters[] = {a, b, c, d, e, f, g, h, i, g, k, l, m, n, o, p, q, r, s, t, u, v, w, h, y, z};
int letters1[] = {97, 101, 105, 108, 110, 111, 114, 115, 116, 117};
int letters2[] = {100, 103};
int letters3[] = {98, 99, 109, 112};
int letters4[] = {102, 104, 118, 119, 121};
int ALPHA[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};


int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int point = 0;

    for (int i = 0, l = strlen(word); i < l; i++)
    {
        if (isupper(word[i]))
        {
            int place = word[i] - 'A';
            point += POINTS[place];
        }
        else if (islower(word[i]))
        {
            int place = word[i]- 'a';
            point += POINTS[place];
        }
    }
    return point;
}
