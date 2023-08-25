// Write a programe to print Hollow Inverted half pyramid

#include <stdio.h>
void main()
{
    int count = 0;

    for (count = 0; count < 6; count++)
    {
        printf("*");
    }

    printf("\n");
    printf("*");
    for (count = 0; count < 3; count++)
    {
        printf(" ");
    }

    printf("*");
    printf(" ");
    printf("\n");
    printf("*");
    for (count = 0; count < 2; count++)
    {
        printf(" ");
    }

    printf("*");
    for (count = 0; count < 2; count++)
    {
        printf(" ");
    }

    printf("\n");
    for (count = 0; count < 2; count++)
    {
        printf("*");
        printf(" ");
    }

    for (count = 0; count < 2; count++)
    {
        printf(" ");
    }
    printf("\n");
     for (count = 0 ; count< 2;count++)
    {
        printf("*");
    }
    printf("\n");
    printf("*");

}
