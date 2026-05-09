#include <stdio.h>

void sum();
void max();
void min();
void checkOddEven();
void factorial();

int main()
{

    int option;

    printf("----CLI UTILITY TOOLKIT----\n");

    do
    {
        printf("1.Sum\n2.Maximum\n3.Minimum\n4.Check Even or odd\n5.Find Factorial\n6.Exit\n");
        printf("Choose your options:");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            sum();
            break;

        case 2:
            max();
            break;

        case 3:
            min();
            break;
        case 4:
            checkOddEven();
            break;
        case 5:
            factorial();
            break;
        case 6:
            break;
        default:
            printf("Wrong Input!!\n");
        }
    } while (option != 6); // loop ends

    return 0;
}

void max()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Maximum = %d\n", a > b ? a : b);
}
void sum()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Sum = %d\n", a + b);
}

void min()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Minimum = %d\n", a < b ? a : b);
}

void checkOddEven()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf(n % 2 == 0 ? "Even\n" : "Odd\n");
}

void factorial()
{
    int n;
    int factorial = 1;
    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", n, factorial);
}
