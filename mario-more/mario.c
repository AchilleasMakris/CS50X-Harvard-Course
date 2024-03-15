#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Size: ");
    }
    while (height < 1 || height > 8);

    // Print grid of bricks
    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < height; column++)
        {
            if (row + column < height - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("  ");
        for (int right = 0; right < row + 1; right++)
        {
            printf("#");
        }
        printf("\n");
    }
}
