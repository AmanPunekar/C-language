#include <stdio.h>

int main()
{

    int length, breadth;

    printf("Give your length of rectangle: ");
    scanf("%d", &length);

    printf("Give your breadth of rectangle: ");
    scanf("%d", &breadth);

    int area = length * breadth;
    int parameter = 2 * (length + breadth);

    printf("Your area of rectangle is %d\n", area);
    printf("Your parameter of rectangle is %d", parameter);

    return 0;
}