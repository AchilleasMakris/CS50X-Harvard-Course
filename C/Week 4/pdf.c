#include <cs50.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, string argv[])
{
    //TODO: Check first four bytes in given file
    string filename = argv[1];
    FILE *f = fopen(filename, "r");
    uint8_t buffer[4];
    fread(buffer, 1, 4, f);

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", buffer[i]);
    }
    fclose(f);
}
