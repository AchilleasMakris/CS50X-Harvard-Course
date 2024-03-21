#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float x, float y, float z);
int main(void)
{
    // Prompt the user for the lengths of the sides of the triangle
    float x = get_float("Enter the length of side x: ");
    float y = get_float("Enter the length of side y: ");
    float z = get_float("Enter the length of side z: ");

    // Check if the triangle is valid
    if (valid_triangle(x, y, z))
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}


bool valid_triangle(float x, float y, float z)
{
    if(x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    if((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }
    return true;
}

