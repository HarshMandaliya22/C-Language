#include <stdio.h>
void main()
{
    int n = 6;
    int i = 0;
    int j =0;
    int k =n;
    int l=n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < k ; j++)
        {
            printf(" ");
           
        }
        printf("*");
        for (j = l ; j < n;j++)
        {
            printf(" ");
        }
        printf("*");
        k--;
        printf("\n");
    }
}