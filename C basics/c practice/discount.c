#include <stdio.h>

int main()
{
    // // discount to amount
    // float initial_amount;
    // printf("Enter your total initial amount: ");
    // scanf("%f", &initial_amount);

    // if (initial_amount <= 5000)
    // {
    //     printf("No discount pay %.2f rupee", initial_amount);
    // }
    // else if (initial_amount <= 7000)
    // {
    //     printf("Your discounted amount is %.2f", initial_amount - (initial_amount * 0.05));
    //     // printf("Your discounted amount is %.2f", initial_amount * 0.95); //we can also write like this
    // }
    // else if (initial_amount <= 9000)
    // {
    //     printf("Your discounted amount is %.2f", initial_amount - (initial_amount * 0.10));
    //     // printf("Your discounted amount is %.2f", initial_amount * 0.90); //we can also write like this
    // }
    // else
    // {
    //     printf("Your discounted amount is %.2f", initial_amount - (initial_amount * 0.20));
    //     // printf("Your discounted amount is %.2f", initial_amount * 0.80); //we can also write like this
    // }

    // improved version

    float amount, discountAmount, finalAmount;
    int discountPercent;

    printf("Enter amount : ");
    scanf("%f", &amount);

    if (amount <= 5000)
        discountPercent = 0;
    else if (amount <= 7000)
        discountPercent = 5;
    else if (amount <= 9000)
        discountPercent = 10;
    else
        discountPercent = 20;

    discountAmount = (amount * discountPercent) / 100;
    finalAmount = amount - discountAmount;

    printf("Final amount after discount : %.2f\n", finalAmount);

    return 0;
}
