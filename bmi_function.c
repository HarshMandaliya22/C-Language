// Write a programe to findout bmi and bmi category for user using function
#include <stdio.h>

float getMeter(int hFoot, int hInch)
{
    float Fmeter = 0, Imeter = 0, Total_Meter = 0;
    Fmeter = (hFoot / 3.281);
    Imeter = (hInch / 39.37);
    Total_Meter = Fmeter + Imeter;
    return Total_Meter;
}
float bmi(int Weight, float Total_Meter)
{
    float bmi = 0;
    bmi = Weight / (Total_Meter * Total_Meter);
    return bmi;
}

void main()
{
    int weight = 0;
    int hFoot = 0;
    int hInch = 0;

    printf("Enter your Weight in Kg : ");
    scanf("%d", &weight);
    printf("Enter your Height in Foot : ");
    scanf("%d", &hFoot);
    printf("Enter your Height in Inch : ");
    scanf("%d", &hInch);
    printf("Your BMI is %f", bmi(weight, getMeter(hFoot, hInch)));
}