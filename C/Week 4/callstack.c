#include <stdio.h>

int fact(int n);

int main (void)
{
    printf("%i\n", fact(5));
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
     else
     {
        return n * fact(n-1);
     }
}
