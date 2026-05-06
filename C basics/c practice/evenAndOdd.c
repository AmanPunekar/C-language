// check number is even or odd
#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Your number is even");
    }
    else
    {
        printf("Your number is odd");
    }

    return 0;
}