//display_number_of_month.c
//Write a programe to display how many days the given month
#include<stdio.h>
void main()
{
    int number = 0;

    printf("Enter the month number : ");
    scanf("%d",&number);

    if (number == 1)
    {
        printf("This month is January and it has 31 days");
    }
    else if (number == 2)
    {
        printf("This month is February and it has either 28 days or 29 days");
    }
    else if (number == 3)
    {
        printf("This month is March and it has 31 days");
    }
    else if (number == 4)
    {
        printf("This month is April and it has 30 days");
    }
     else if (number ==5)
    {
        printf("This month is May and it has 31 days");
    }
     else if (number == 6)
    {
        printf("This month is June and it has 30 days");
    }
     else if (number == 7)
    {
        printf("This month is July and it has 31 days");
    }
     else if (number == 8)
    {
        printf("This month is August and it has 31 days");
    }
     else if (number == 9)
    {
        printf("This month is September and it has 30 days");
    }
     else if (number == 10)
    {
        printf("This month is October and it has 31 days");
    }
     else if (number == 11)
    {
        printf("This month is November and it has 30 days");
    }
     else if (number == 12)
    {
        printf("This month is December and it has 31 days");
    }
    else
    {
        printf("Good Bye.................");
    }
    
}