#include <stdio.h>
#include <math.h>
int main()
{

    double principle_amount, interest_rate, time;
    printf("Enter your Principle Amount = ");
    scanf("%lf", &principle_amount);

    printf("Enter your Interest Rate = ");
    scanf("%lf", &interest_rate);

    printf("Enter your Time = ");
    scanf("%lf", &time);

    double amount = principle_amount * pow((1 + interest_rate / 100), time);
    double compoundInterest = amount - principle_amount;

    printf("COmpound Interest is: %.2lf", compoundInterest);

    return 0;
}