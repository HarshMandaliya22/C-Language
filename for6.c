// Write a programe to print iverted half pyramid of numbers
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1
#include <stdio.h>
void main()
{
    int number = 1;
    int count = 0;
    int span = 6;
    for (span = 6; span >= 0; span--)
    {
        for (count = 1; count <= span; count++)
        {
            number = count;
            printf("%d ",number);
        }
        printf("\n");
    }
}