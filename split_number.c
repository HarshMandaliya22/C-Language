//Write a programe to split the three digit number and display it, take the value from user
#include<stdio.h>
void main()
{
    int number = 0;
    printf("Enter the 3 digit code with all different number");
    scanf("%d",&number);

    int first_digit = 0, second_digit = 0, third_digit = 0;
    first_digit = number/100;
    printf("first digit is %d",first_digit);

    second_digit = (number%100)/10;
    printf("\nsecond digit is %d",second_digit);

    third_digit = (number%100)%10;
    printf("\nthird_digit is %d",third_digit);
}