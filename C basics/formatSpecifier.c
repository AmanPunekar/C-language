#include <stdio.h>

int main()
{
    int a = -1;
    int b = 2546;
    int c = +55;
    printf("%+d\n", a);
    // printf("%+04d\n", a); //04 to add 0 before a so that it make 4 digit number like 0004, but if - is there then it become -004
    // printf("%d\n", a);
    printf("%+d\n", b);
    printf("%+d\n", c);

    return 0;
}