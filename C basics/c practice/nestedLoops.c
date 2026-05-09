#include <stdio.h>

int main()
{

    int n = 5;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("* ");
        }
        printf("\n"); // it gives line break after j complete one loop inwich i prints 5 stars
    }

    return 0;
}