// #include <stdio.h>

// void solve(int n);

// int main()
// {

//     solve(5);
//     return 0;
// }
// // recursive function
// void solve(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return; // because print stop at zero.
//     }

//     // solve(n - 1); // if we have to print from 0 means 1 2 3 4 5 then call function before printf

//     printf("%d ", n);

//     solve(n - 1); // 12345

// };

#include <stdio.h>

int factorial(int n);

int main()
{

    printf("%d", factorial(5));
    return 0;
}

int factorial(int n)
{
    // base case
    if (n == 1)
    {
        return 1; // give 1 when factorial reach to 1
    }

    // factorial of n

    return n * factorial(n - 1); //  5 * 4 * 3 * 2 * 1
};
