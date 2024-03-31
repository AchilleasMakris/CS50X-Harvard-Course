#include <stdio.h>

int main(void)
{
    // string is char* in C language.
    char* s = "HI!";
    // *(s + 1) is the under the hood s[1]
    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c\n", *(s + 2));
}
