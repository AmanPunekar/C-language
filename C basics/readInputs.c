#include <stdio.h>

int main()
{

    // when we take char before int , it give correct result

    char c;
    int age;
    // printf("Enter your letter: ");
    // scanf("%c", &c);

    // printf("Enter your age: ");
    // scanf("%d", &age);

    // // show agecc
    // printf("your age is %d and letter is %c", age, c);

    // but if we take int input first and char input letter then it not work as expected. because when we take int and
    // click enter the enter it insert \n in buffur so that character takes \n and not getting char from user
    // example below:

    // printf("Enter your age: ");
    // scanf("%d", &age);

    // printf("Enter your letter: ");
    // scanf("%c", &c);

    // // show agecc
    // printf("your age is %d and letter is %c", age, c);

    // to fix above problem we can do this:

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your letter: ");
    scanf(" %c", &c); // add space before %c
    // fflush(stdin);   // clear the input buffer like above
    scanf("%c", &c); // add space before %c

    // show agecc
    printf("your age is %d and letter is %c", age, c);

    return 0;
}