#include <stdio.h>

int main()
{
    int num, d1, d2, d3, sum;

    printf("Enter 3-digit number: ");
    scanf("%d", &num);

    d3 = num % 10;        // 123 % 10 = 3 (get last number)
    d2 = (num / 10) % 10; // num / 10 = 123 / 10 = 12   (integer division, decimal removed) , now 12 % 10 = 2 (get midde number)
    d1 = num / 100;       // 123 / 100 = 1   (get first number)

    sum = d1 + d2 + d3;

    printf("Sum of digits = %d", sum);
    return 0;
}