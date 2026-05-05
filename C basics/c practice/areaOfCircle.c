#include <stdio.h>
#include <math.h>
int main()
{
    int r;
    double PI = 3.14;
    printf("Enter your radius of circle= ");
    scanf("%d", &r);

    // area of circle formula
    double area = PI * pow(r, 2); 

    // circumference of circle formula
    double circumference = 2 * PI * r;

    printf("Area of circle is: %.2lf\n", area);
    printf("Circumference of circle is: %.2lf", circumference);

    return 0;
}