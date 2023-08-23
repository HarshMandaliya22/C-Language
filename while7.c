// Write a programe to print inverted half pyramid
#include <stdio.h>
void main()
{
    int count = 6, flash = 6;

    while (flash <= 6)
    {
        while (flash <= count)
        {
            printf("*");
            count = count - 1;
        }
        printf("\n");
        count = 6;
        flash = flash - 1;
    }

    // while (count < 6)
    // {
    //     printf("*");
    //     count = count + 1;
    // }

    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
}