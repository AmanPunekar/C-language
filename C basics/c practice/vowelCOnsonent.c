#include <stdio.h>

int main()
{
    char word;
    printf("Enter Vowel : ");
    scanf("%c", &word);

   if (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u')

    // {  we can comment curly braces if we only print single statement
        printf("Your alphabet \"%c\" is vowel", word);
    // }  we can comment curly braces if we only print single statement
    else
    // {  we can comment curly braces if we only print single statement
        printf("Your alphabet \"%c\" is consonent", word);
    // }  we can comment curly braces if we only print single statement

    return 0;
}