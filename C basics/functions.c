#include <stdio.h>

// function declaration
int sum(int a, int b);
int min(int a, int b);
int max(int a, int b);
void printHello(); // if function not return value or not any type of values, it only prints.

int swap(int a, int b);
int main()
{

    int a = 10, b = 5;
    // printf("%d\n", sum(5, 2)); // function call
    // printf("Min= %d\n", min(5, 8));
    // printf("Max= %d\n", max(1, 2));
    // printHello(); // we dont have to write print because this funcition already prints.
    printf("before swapping a = %d and b = %d\n", a, b);
    swap(10, 5);                                        //
    printf("After swapping a = %d and b = %d\n", a, b); // its not swap because when we swap the arguments is pass by value means when we pass variable it pass copy not actual arguments.

    return 0;
}

// function implementation
int sum(int a, int b)
{
    return a + b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}

void printHello()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Hello bro %d\n", i);
    }
}

// swapping wto variables:
int swap(int a, int b)
{

    int temp = a;
    a = b;
    b = temp;

    printf("after swapping a = %d and b = %d\n", a, b);
}