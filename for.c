// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 1000
#include <stdio.h>
void main()
{
    int number = 1, temp = 5, a= 0;
    printf("%d ", number);

    for (number=1 ; number < 966 ; number++)
    {
        number = number + temp; // 6
        temp = temp + 4;        // 9
        printf("%d ", number);
    }

    // number = number + temp ; //15
    // temp = temp + 4 ;//13
    // printf("%d ",number);

    // number = number + temp ; //28
    // printf("%d ",number);
}