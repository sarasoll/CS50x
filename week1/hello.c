#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string theNameOfTheUser = get_string("What's your name? ");

    printf("Hi, %s\n", theNameOfTheUser);
}
