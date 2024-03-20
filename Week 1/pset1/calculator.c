#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Long for 64bit memory to pass more than 4billion number.
    long x = get_long("x: ");
    long y = get_long("y: ");

    // Float for decimals devided (Example: 0.33333)
    double z = (double) x / (double) y;
    // %.20 for 2 decimals
    printf("%.20f\n", z);

}

