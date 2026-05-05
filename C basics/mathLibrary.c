#include <stdio.h>
#include <math.h>
int main()
{

    int a = 2, b = 4;
    int ans = pow(a, b);
    int square = sqrt(b);
    printf("answer of power %d \n", ans);
    printf("square root of this is %d\n", square);

    printf("Floor answer = %lf\n", floor(8.9));   // down value means 8
    printf("celi answer = %lf\n", ceil(8.9));     // upper value like 9
    printf("roundof answer = %lf\n", round(8.5)); // when value is between two number like 8.5 then it go to upper value like 9
    printf("roundof answer = %lf\n", round(7.4)); // it round off the value to nearest number
    return 0;
}