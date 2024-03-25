#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Hight: ");
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        // if i = 0, j < i + 1  = atleast 1 #
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
