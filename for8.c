// write a programe to print inverted full pyramid of "*"
#include <stdio.h>
void main()
{
    int count = 0;
    int space = 0;

    for (count = 0; count < 6; count++)
    {
        printf("*");
        printf(" ");
    }
    printf("\n");

    for (count = 0; count < 5; count++)
    {
        printf(" ");
        printf("*");
    }
    printf("\n");
    printf(" ");

    for (count = 0; count < 4; count++)
    {
        printf(" ");
        printf("*");
    }
    printf("\n");

    for (space = 0; space < 2; space++)
    {
        printf(" ");
    }

    for (count = 0; count < 3; count++)
    {
        printf(" ");
        printf("*");
    }
    printf("\n");

    for (space = 0; space < 3; space++)
    {
        printf(" ");
    }

    for (count = 0; count < 2; count++)
    {
        printf(" ");
        printf("*");
    }
    printf("\n");
    for (space = 0; space < 5; space++)
    {
        printf(" ");
    }
    printf("*");
}