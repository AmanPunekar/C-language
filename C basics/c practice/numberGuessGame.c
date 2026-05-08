#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int guess;
    srand(time(NULL));
    int secretNum = rand() % 100 + 1; // because random number genrate big number ike 451236879 but we want last two number means 1 to 99 but we want 100 then we plus 1;
    printf("Guess number: \n");

    do
    {

        printf("Enter your Guess: ");
        scanf("%d", &guess);

        if (guess < secretNum)
        {
            printf("Two Low!!\n");
        }
        else if (guess > secretNum)
        {
            printf("Two High!!\n");
        }
        else
        {
            printf("Congratulations you win\n");
        }

    } while (guess != secretNum);

    return 0;
}