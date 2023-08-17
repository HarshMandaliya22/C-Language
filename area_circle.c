//Write a programe to find the area of circle, take the value from user
#include<stdio.h>
void main ()
{
    float radius = 0 , area =0 , pi = 3.14159;
    printf("Enter the value of radius");
    scanf("%f",&radius);
    area = pi * radius * radius;
    printf("Area of circle is %f",area);
}