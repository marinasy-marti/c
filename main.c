#include <stdio.h>

int main()
{
    int number;
    printf("Enter number between 1 to 7 :  ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thirsday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invalid value");
        break;
    }

    return 0;
}