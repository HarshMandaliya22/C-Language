// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include <stdio.h>
void main()
{
    int number = 0;
    int temp = 1;

    printf("%d ", number);

    do
    {
        number = number + temp; // 1
        temp = temp + 1;
        printf("%d ", number);
    } while (number < 990);

    // number = number + temp ; //3
    // temp = temp + 1 ;
    // printf("%d ", number);
}