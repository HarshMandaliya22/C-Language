// 3] 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000

#include <stdio.h>
void main()
{
    int number = 0, answer = 0;

    printf("%d ", answer);

    while (answer < 990)
    {
        number = number + 1;      // 1
        answer = answer + number; // answer=1
        printf("%d ", answer);
    }
    // number = number + 1 ; //2
    // answer = answer + number ; //answer=3
    // printf("%d ", answer);
    // number = number + 1; //3
    // answer = answer + number; //6
    // printf("%d ",answer);
}