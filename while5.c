// 2] Write a programe to print odd number till 3000
#include <stdio.h>
void main()
{
    int n = 2;

    printf("%d ", n);

    while (n < 3000)
    {
        n = n + 2;
        printf("%d ", n);
    }
}