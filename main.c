#include <stdio.h>

int main()
{
    int a = 4.33;
    int b = 0;
    double restult = a + b;

    // a = 2.5;

    int another_result = a + (int)restult;

    printf("The result is: %lf\n", restult);
    printf("The another result is: %d\n", another_result);
    printf("a is: %d\n", a);
    return 0;
}