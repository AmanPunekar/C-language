#include <stdio.h>

int main()
{

    float movie_rating;

    printf("Enter your movie rating: ");
    scanf("%f", &movie_rating);

    // if (movie_rating >= 0 && movie_rating <= 2)
    // {
    //     printf("Movie is flop");
    // }
    // else if (movie_rating >= 2.1 && movie_rating <= 3.4)
    // {
    //     printf("Movie is Semi-Hit");
    // }
    // else if (movie_rating >= 3.5 && movie_rating <= 4.5)
    // {
    //     printf("Movie is Hit");
    // }
    // else if (movie_rating >= 4.6 && movie_rating <= 5)
    // {
    //     printf("Movie is Super Hit");
    // }

    // below code is good and optimised because it fixes problem of : gaps in ranges and unnecessary complexity.
    if (movie_rating >= 0 && movie_rating <= 2)
    {
        printf("Movie is flop");
    }
    else if (movie_rating <= 3.4)
    {
        printf("Movie is Semi-Hit");
    }
    else if (movie_rating <= 4.5)
    {
        printf("Movie is Hit");
    }
    else if (movie_rating <= 5)
    {
        printf("Movie is Super Hit");
    }
    else
    {
        printf("Invalid rating");
    }

    return 0;
}