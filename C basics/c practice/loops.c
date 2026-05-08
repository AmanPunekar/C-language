// sum of numbers

// #include <stdio.h>

// int main()
// {

//     int num; // we can only initialize variable if we get value from user , otherwise it give output having garbage value
//     printf("Enter number to sum and average: ");
//     scanf("%d", &num);

//     int sum = 0; // if we cant initialize it , it takes garbage value like any number

//     for (int i = 0; i <= num; i++)
//     {
//         // printf("i= %d\n",i);
//         sum += i;
//     }

//     printf("Sum of number is: %d\n", sum);
//     printf("And average of all number is: %.2f", ((float)sum / num));

//     return 0;
// }

// factorial question

// #include <stdio.h>

// int main()
// {

//     int num, factorial = 1; // factorial means if we take input 5 then it become 5*4*3*2*1
//     printf("Enter number to get factorial : ");
//     scanf("%d", &num);

//     // initialize with1 because in factorial there is multiplication and hence 0*1 is 0 so take 1 as inital value

//     for (int i = 1; i <= num; i++)
//     {
//         factorial *= i;
//     }

//     printf("factorial is: %d\n", factorial);

//     return 0;
// }

// factor of a number
// it means which number is number which we take is completely divided by which number ie. the number give remainder 0 when divide.

// #include <stdio.h>

// int main()
// {

//     int num;
//     printf("Enter number to get factor of number : ");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++) // dont use i = 0 because modulus % not get 0 , ie it give answer 0
//     {
//         if (num % i == 0)
//             printf("%d,", i); // if i give number 12 then output is 1,2,3,4,6,12 because this number can completely divide 12
//     }

//     return 0;
// }

// print prime number its same as above but the prime number is only divide by 1 and themselves means count is 2 ie. 1,7 if we take input 7

// #include <stdio.h>

// int main()
// {

//     int num, count = 0; // we take count to check prime numbers
//     printf("Enter number to get factor of number : ");
//     scanf("%d", &num);

//     if (num <= 1) // because 0 is not prime number
//     {
//         printf("Not a prime number");
//         return 0;
//     }

//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }
//     printf("%s", count == 2 ? "Prime number" : "Not a prime number");
//     return 0;
// }

// Seperate digit and reverse it and calculate their sum

#include <stdio.h>

// int main()
// {

//     int n;

//     printf("Enter your number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     while (n != 0)
//     {

//         // last digit print
//         int lastDigit = n % 10; // eg. 123 % 10=3 then 12 % 10 = 2 then 1%10 = 1
//         sum += lastDigit;       // now one by one number come here like 3 + 2 + 1 = 6

//         printf("%d\n", lastDigit);
//         n = n / 10; // now 123/10 = 12 then 12/10=1 then 1/10 = 0 loop finish
//     }
//     printf("Sum = %d\n", sum);
//     return 0;
// }

// Reversing a given number and it stores in reverse veriable.

#include <stdio.h>

int main()
{
    int n, rev = 0; // this prgram is like above but it store value in rev not only print number one bu one

    printf("Enter your number: ");
    scanf("%d", &n);

    int copy = n;
    while (n != 0)
    {
        int lastDigit = n % 10;     // it take last digit
        rev = rev * 10 + lastDigit; // if we take 123 then 0*10+3 = 3 then 3*10+2 = 32 then 32*10+1 =321 we get reverse number
        n /= 10;
    }

    // for (; n != 0;) // it runs until n = 0,  same as above but it uses for loop.
    // {
    //     int lastDig = n % 10;
    //     rev = rev * 10 + lastDig;

    //     n /= 10;
    // }

    printf("Reverse= %d\n", rev);

    // printf(rev == n ? "Pallindrome" : "Not a pallindrome"); // this code is also use for checking pallindrome means 121 == 121 or 14541 == 14541 . means number same even reverse it.
    // but it gives not a pallindrome number because value of n changes in loop so that we can copy and save initial value in copy variable.
    printf(rev == copy ? "Pallindrome" : "Not a pallindrome");
    return 0;
}