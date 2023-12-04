#C code to count the length of the char in the input

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    string char = get_string("Add char to count them: ");
    int length = strlen(char);
    printf("%i\n", length);
}
