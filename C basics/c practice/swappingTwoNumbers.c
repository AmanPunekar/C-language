#include <stdio.h>

int main()
{
    // swapping two numbers
    int a;
    int b;
    int temp;

    printf("Enter Your first value a = ");
    scanf("%d", &a);
    printf("Enter Your second value b = ");
    scanf("%d", &b);

    // swap

    temp = a;
    a = b;
    b = temp;

    printf("now a = %d and b = %d", a, b);

    return 0;
}