#include<stdio.h>
void main()
{
    int number=0;

    printf("Enter the value of number=");
    scanf("%d",&number);

    if(number%2 ==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}