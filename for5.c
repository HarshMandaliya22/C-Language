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
    int span = 0;

    for (span = 0; span <= 7; span++)
    {
        for (count = 1; count < span; count++)
        {
            number = count;
            printf("%d ", number);
        }
        printf("\n");
    }
}