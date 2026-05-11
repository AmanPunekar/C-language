#include <stdio.h>

void printHellow(int n);

int main()
{

    printHellow(5);
    return 0;
}

void printHellow(int n)
{

    if (n == 0)
    {
        return; // because print stop at zero.
    }

    printf("Hellow %d\n", n);
    printHellow(n - 1);
};
