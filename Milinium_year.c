// write a prgoram to findout whether given year is milinium year or not.
// 1000,2000,3000,4000,5000,...
#include <stdio.h>
void main()
{
    int number = 0;
    printf("Enter the number of year : ");
    scanf("%d",&number);

    if ((number % 1000) == 0)
    {
        printf("This year is Milinium Year");
    }
    else
    {
        printf("This year is not Milinium Year");
    }
}