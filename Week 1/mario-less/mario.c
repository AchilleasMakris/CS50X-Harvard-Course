#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get Size Of Grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);

    // Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}
