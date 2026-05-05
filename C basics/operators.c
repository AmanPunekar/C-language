#include <stdio.h>

int main()
{

    int a = 10;
    int b = 20;
    b++; // it increased because peration done here so that it give 11
    printf("b= %d", b);
    // but here
    printf(" %d", a++);   // it give 10 first then increment because operation done inside print
    printf(" %d", a);     // it gives incremented value
    printf(" %d\n", ++a); // it increment first.

    char ch ="a";
    double db=24563;
    // sizeof operator which give size of variable(in byte)
    printf("size of char ch = %d \n", sizeof(ch)); // give 1
    printf("size of int a = %d \n", sizeof(a)); //give 4
    printf("size of int db = %d \n", sizeof(db)); // give 8
    return 0;
}