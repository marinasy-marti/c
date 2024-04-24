#include <stdio.h>

int main()
{

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 120)
    {
        printf("Are you sure you're still alive?");
    }
    else if (age >= 18 && age < 120)
    {
        printf("you can go to jail");
    }
    else
    {
        printf("you're still a minor\n");
    }

    return 0;
}