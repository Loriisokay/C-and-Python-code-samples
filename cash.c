#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents); //25
int calculate_dimes(int cents); //10
int calculate_nickels(int cents); //5
int calculate_pennies(int cents); //1

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    while (true)
    {
        cents = get_int("Change owed: ");
        if (cents > 0)
        {
            break;
        }
    }
    return cents;
}

int calculate_quarters(int cents)
{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents / 1;
}
