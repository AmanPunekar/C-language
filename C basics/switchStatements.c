#include <stdio.h>

int main()
{

    int day = 4;

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;

    default:
        break;
    }


    // nested switch case
    int outer = 1;
    char inner = 'A';

    switch (outer) {
        case 1:
            printf("Outer Case 1\n");
            // Nested Switch starts here
            switch (inner) {
                case 'A':
                    printf("Inner Case A\n");
                    break;
                case 'B':
                    printf("Inner Case B\n");
                    break;
            }
            break; // Exits Outer Case 1
        case 2:
            printf("Outer Case 2\n");
            break;
    }
    return 0;
}
