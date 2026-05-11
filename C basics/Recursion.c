#include <stdio.h>

void printHellow(int n);

int main()
{

    printHellow(5);
    return 0;
}
// recursive function
void printHellow(int n)
{
    // base case
    if (n == 0)
    {
        return; // because print stop at zero.
    }

    printf("Hello %d\n", n);

    // recursive call
    printHellow(n - 1);
};
