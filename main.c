
#include <stdio.h>

int main()
{
    //  the data type
    /*
    int             (4 bytes ) | %d for printing
    double          (8 bytes ) | %lf for printing
    float           (4 bytes ) | %f for printing
    char            (1 bytes ) | %c for printing
    */

    double number = 2.34;
    printf("%.2lf", number);

    char letter = 'a';
    printf("\n%c", letter);
    return 0;
};