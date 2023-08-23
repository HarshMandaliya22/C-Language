// 1] 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000

#include <stdio.h>
void main()
{
    int first = 2, second = 1, answer = 0;

    printf("%d ", first);
    printf("%d ", second);

    answer = first + second; // 3

    while (answer < 3000)

    {
        first = answer; // first=3
        printf("%d ", answer);
        answer = answer + second; // 4
        second = answer;// second=4
        if (answer < 3000)
        {
        printf("%d ", answer);
        answer = answer + first; // 7
        }
    }
}