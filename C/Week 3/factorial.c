#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n = get_int("Factorial of number: ");

    // Call the fact function and store its result
    int result = collatz(n);

    // Print the result
    printf("Result: %d\n", result);
    return 0;
}

int collatz(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0)
    {
        // Return the result of n divided by 2
        return 1 + collatz(n/2);
    }
    else
    {
        // Return the result of 3n + 1
        return 1 + collatz(3 * n + 1);
    }
}
