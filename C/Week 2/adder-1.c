#include <cs50.h>
#include <stdio.h>

// declare function prototype
int add_two_ints(int a, int b);

int main(void)
{
    // ask user for input
    int x = get_int("Give me an integer: ");
    int y = get_int("Give me another integer: ");

    // add the two numbers together via a function call
    int z = add_two_ints(x, y);

    // output the result
    printf("The sum of %i and %i is %i!\n", x, y, z);

}

int add_two_ints(int a, int b)
{
    int sum = a + b;
    return sum;
}
