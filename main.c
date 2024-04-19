#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You are %d years old\n", age);

    double number;
    char abc;

    printf("Enter double input: ");
    scanf("%lf", &number);

    printf("Enter char input: ");
    scanf(" %c", &abc);

    printf("Number: %lf\nChar: %c\n", number, abc);

    printf("\nTwo type input ");
    printf("\nEnter a value:");
    scanf("%lf %c", &number, &abc);

    printf("Number: %lf\nABC: %c\n", number, abc);

    return 0;
}