#include <stdio.h>
#include <cs50.h>

int main(void) {
    string first = get_string("What is your first name?\n");
    string last = get_string("What is your last name?\n");
    printf("Hello, %s %s\n", first, last);
    
}


