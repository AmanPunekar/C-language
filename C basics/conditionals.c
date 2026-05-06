// if else
#include <stdio.h>

int main()
{
    char traffic_light;
    printf("Give signal like G(green) Y(yellow) R(Red): ");
    scanf("%c", &traffic_light);

    if (traffic_light == 'G')
    {
        printf("You can go now");
    }
    else if (traffic_light == 'Y')
    {
        printf("Please slow down");
    }
    else if (traffic_light == 'R')
    {
        printf("Stop here");
    }
    else
    {
        printf("Invalid inputs");
    }

    return 0;
}