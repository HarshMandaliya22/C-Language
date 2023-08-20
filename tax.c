// 5) Write a C program to calculate income tax, gross income, net income from monthly income given by user

// yearly income     tax rate
// <3,00,000         5%

// >=3,00,000
// <5,00,000         10%

// >=5,00,000
// <8,00,000         20%

// >=8,00,000        30%

#include <stdio.h>
void main()
{
    float monthly_income = 0, income_tax = 0, net_income = 0, gross_income = 0;

    printf("Enter your Monthly Income : ");
    scanf("%f", &monthly_income);

    net_income = (monthly_income * 12);

    printf("Your Net Income is %0.2f", net_income);

    if (net_income < 300000)
    {
        income_tax = ((net_income * 5) / 100);

        printf("\nYour Income Tax is %0.2f", income_tax);

        gross_income = (net_income - income_tax);

        printf("\nYour Gross Income is %0.2f ", gross_income);
    }
    else if (net_income >= 300000 && net_income < 500000)
    {
        income_tax = ((net_income * 10) / 100);

        printf("\nYour Income Tax is %0.2f", income_tax);

        gross_income = (net_income - income_tax);

        printf("\nYour Gross Income is %0.2f ", gross_income);
    }
    else if (net_income >= 500000 && net_income < 800000)
    {
        income_tax = ((net_income * 20) / 100);

        printf("\nYour Income Tax is %0.2f", income_tax);

        gross_income = (net_income - income_tax);

        printf("\nYour Gross Income is %0.2f ", gross_income);
    }
    else if (net_income >= 800000)
    {
        income_tax = ((net_income * 30) / 100);

        printf("\nYour Income Tax is %f", income_tax);

        gross_income = (net_income - income_tax);

        printf("\nYour Gross Income is %0.2f ", gross_income);
    }
}