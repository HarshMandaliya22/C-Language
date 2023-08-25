// Write a programe to print half pyramid of numbers
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
#include <stdio.h>
void main()
{
    int number = 1;
    int count = 0;

    printf("%d ", number);

    printf("\n");

    printf("%d ", number);

    number = number + 1;
    printf("%d ", number);

    printf("\n");
    number = 1;

    printf("%d ", number);

    for (count = 0; count < 2; count++)
    {
        number = number + 1;
        printf("%d ", number);
    }
    // number = number + 1;
    // printf("%d ", number);
    printf("\n");
    number = 1;
    printf("%d ", number);
    for(count = 0 ; count<3; count++)
    {
        number = number + 1;
        printf("%d ", number);
    }
    // number = number + 1;
    // printf("%d ", number);
    // number = number + 1;
    // printf("%d ", number);
    printf("\n");
    number = 1;
    printf("%d ", number);
    for(count = 0 ; count<4; count++)
    {
        number = number + 1;
        printf("%d ", number);
    }

}