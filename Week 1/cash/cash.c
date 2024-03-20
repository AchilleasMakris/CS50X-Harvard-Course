#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    int quarters = calculate_quarters(cents);
    printf("%i\n", quarters);
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    {
        while (cents >= 25)
        {
            quarters++;
            cents = cents - 25;
        }
        while (cents >= 10 && cents < 25)
        {
            quarters++;
            cents = cents - 10;
        }
        while (cents >= 5 && cents < 10)
        {
            quarters++;
            cents = cents - 5;
        }
        while (cents >= 1 && cents < 5)
        {
            quarters++;
            cents = cents - 1;
        }
    }
    return quarters;
}
