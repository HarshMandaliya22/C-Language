// write a program to accept month number from user. display message "this month has 28 or 29 days" if month if february
#include<stdio.h>
void  main()
{
 int number = 0;
 printf("Enter the month number :");
 scanf("%d",&number);

 if (number == 2)
 {
    printf("This month has 28 or 29 days");
 }
 else
 {
    printf("Good Bye.................");
 }
}