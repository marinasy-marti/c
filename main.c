#include <stdio.h>

int main()
{
    // syntax:
    // tex_condition ? expression1: expresssion2;
    int age = 16;
    (age >= 18) ? printf("You can go to jail ") : printf("waiting you are major");

    char operator= '+';
    int x = 8;
    int y = 7;

    int result = (operator== '+') ? (x + y) : (x - y);

    printf("\nresult : %i ", result);

    return 0;
}