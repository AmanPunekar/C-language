#include <stdio.h>

int main()
{

    for (int i = 0; i <= 25; i++)
    {
        // break use for breaking loop
        // if (i == 10) break;
        // continue use for skipping value

        if (i == 10)
            continue;

        printf("%d\n", i);
    }

    return 0;
}


