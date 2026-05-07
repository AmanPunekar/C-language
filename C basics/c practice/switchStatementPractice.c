#include <stdio.h>

int main()
{

    char word = 'u';

    switch (word)
    {
        // case 'a':
        //     printf("Vowel\n");
        //     break;
        // case 'e':
        //     printf("Vowel\n");
        //     break;
        // case 'i':
        //     printf("Vowel\n");
        //     break;
        // case 'o':
        //     printf("Vowel\n");
        //     break;
        // case 'u':
        //     printf("Vowel\n");
        //     break;

        // now if we want vowel for all aeiou then we can use single print vowel for all 5 case,
        // now we dont have multiple printf and break ie. when there is no break then swich case fall from up to bottom.

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel\n");
        break;

    default:
        printf("Consonant\n");
        break;
    }
}