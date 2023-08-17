//Write a programe to find the volume of cylinder, take the value from user
#include<stdio.h>
void main()
{
    float radius = 0, height = 0, pi = 3.14159, volume = 0;
    printf("Enter the value of radius");
    scanf("%f",&radius);

    printf("Enter the value of height");
    scanf("%f",&height);

    volume = pi * radius * radius * height;
    printf("volume of cylider is %f",volume);
}