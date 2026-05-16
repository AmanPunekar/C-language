#include <stdio.h>

int main()
{

    int size;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d Elements of an array: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Elements of an array are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}