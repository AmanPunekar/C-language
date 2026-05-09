#include <stdio.h>

int main()
{

    int n = 5;

    // for (int i = 0; i < n; i++) //  no of rows
    // {
    //     for (int j = 0; j < n; j++) // no of columns
    //     {
    //         printf("* ");
    //     }
    //     printf("\n"); // it gives line break after i complete one loop in which j prints 5 stars
    // }

    // if i want to print this
    // *
    // **
    // ***
    // ****
    // *****

    // her no of column is 5 but no of rows is increased after one loop of i

    // for (int i = 0; i <= n; i++) //  no of rows
    // {
    //     for (int j = 0; j < i; j++) // no of columns
    //     {
    //         printf("* ");
    //     }
    //     printf("\n"); // it gives line break after i complete one loop in which j prints 5 stars
    // }

    // if i want to print this
    //     *
    //    **
    //   ***
    //  ****
    // *****

    // for (int i = 0; i <= n; i++) //  no of rows
    // {
    //     for (int k = 0; k < n - i; k++) // no of spaces n-i means each time 5 - i means 5-1,5-2,5-3,5-4,5-5.
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 0; j < i; j++) // no of columns
    //     {
    //         printf("*");
    //     }
    //     printf("\n"); // it gives line break after i complete one loop in which j prints 5 stars
    // }

    // print pyramid structure perfect traiangelr:

    // for (int i = 0; i <= n; i++) //  no of rows
    // {
    //     for (int k = 0; k < n - i; k++) // no of spaces n-i means each time 5 - i means 5-1,5-2,5-3,5-4,5-5.
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 0; j < i; j++) // no of columns
    //     {
    //         printf("* "); // add only space after star so it give space between two stars
    //     }
    //     printf("\n"); // it gives line break after i complete one loop in which j prints 5 stars
    // }

    // print below V structure

    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *

    // for (int i = 0; i <= n; i++)
    // {

    //     for (int j = 1; j < 2 * n; j++)
    //     {
    //         if (i == j || i + j == 2 * n) // 1 ==1 || 1 + 9 == 2*5 means 10
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for inverted V
    // for (int i = 1; i <= n; i++)
    // {
    //     // Left spaces
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf("  ");
    //     }

    //     // Stars and middle spaces
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         if (j == 1 || j == 2 * i - 1)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }

    //     printf("\n");
    // }

    // for X:

    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (i == j || i + j == 2 * n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
