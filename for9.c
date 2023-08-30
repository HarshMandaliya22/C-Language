// write a program to print hollow full pyramid of "*"
//     *
//    * *
//   *   *
//  *     *
// *       *
//* * * * * *
#include <stdio.h>
void main()
{
    int count = 0;
    int hm = 0;

    for (count = 0; count < 5; count++)
    {
        printf(" ");
    }
    printf("*");
    printf("\n");

    for (count = 0; count < 4; count++)
    {
        printf(" ");
    }
    printf("*");
    printf(" ");
    printf("*");
    printf("\n");

    for (count = 0; count < 3; count++)
    {
        printf(" ");
    }

    printf("*");

    for (count = 0; count < 3; count++)
    {
        printf(" ");
    }

    printf("*");
    printf("\n");

    for (count = 0; count < 2; count++)
    {
        printf(" ");
    }

    printf("*");

    for (count = 0; count < 5; count++)
    {
        printf(" ");
    }

    printf("*");
    printf("\n");

    printf(" ");
    printf("*");

    for (count = 0; count < 7; count++)
    {
        printf(" ");
    }
    
    printf("*");
    printf("\n");

    for (hm = 0; hm < 6; hm++)
    {
        printf("*");
        printf(" ");
    }
}