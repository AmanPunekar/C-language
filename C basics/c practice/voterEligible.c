#include <stdio.h>

int main()
{
    int age;              // stores age
    char name[50];        // stores full name

    printf("Enter your name and age : ");
    scanf("%s %d", name, &age);

    int years_left = 18 - age;   // calculate remaining years

    if (age >= 18)
    {
        printf("%s is eligible to vote\n", name);
    }
    else
    {
        printf("%s is not eligible, you can vote after %d years\n", name, years_left);
    }

    return 0;
}