// Write a programe to findout zodiac sign of user take birth month and day as input
#include <stdio.h>
void main()
{
    int day = 0;
    int month = 0;

    printf("Enter your birth day ");
    scanf("%d", &day);

    printf("Enter your birth month ");
    scanf("%d", &month);

    if (month < 13 && month > 0)
    {
        if ((month == 4 && day >= 1 && day <= 19) || (month == 3 && day >= 21 && day <= 31))
        {
            printf("Your zodiac sign is Aries ");
        }
        else if ((month == 4 && day >= 20 && day <= 30) || (month == 5 && day >= 1 && day <= 20))
        {
            printf("Your zodiac sign is Taurus ");
        }
        else if ((month == 5 && day >= 21 && day <= 31) || (month == 6 && day >= 1 && day <= 20))
        {
            printf("Your zodiac sign is Gemini ");
        }
        else if ((month == 6 && day >= 21 && day <= 30) || (month == 7 && day >= 1 && day <= 22))
        {
            printf("Your zodiac sign is Cancer ");
        }
        else if ((month == 7 && day >= 23 && day <= 31) || (month == 8 && day >= 1 && day <= 22))
        {
            printf("Your zodiac sign is Leo ");
        }
        else if ((month == 8 && day >= 23 && day <= 31) || (month == 9 && day >= 1 && day <= 22))
        {
            printf("Your zodiac sign is Virgo ");
        }
        else if ((month == 9 && day >= 23 && day <= 30) || (month == 10 && day >= 1 && day <= 22))
        {
            printf("Your zodiac sign is Libra ");
        }
        else if ((month == 10 && day >= 23 && day <= 31) || (month == 11 && day >= 1 && day <= 21))
        {
            printf("Your zodiac sign is Scorpio ");
        }
        else if ((month == 11 && day >= 22 && day <= 30) || (month == 12 && day >= 1 && day <= 21))
        {
            printf("Your zodiac sign is Sagittarius ");
        }
        else if ((month == 12 && day >= 22 && day <= 31) || (month == 1 && day >= 1 && day <= 19))
        {
            printf("Your zodiac sign is Capricorn ");
        }
        else if ((month == 1 && day >= 20 && day <= 31) || (month == 2 && day >= 1 && day <= 18))
        {
            printf("Your zodiac sign is Aquarius ");
        }
        else if ((month == 2 && day >= 19 && day <= 29) || (month == 3 && day >= 1 && day <= 20))
        {
            printf("Your zodiac sign is Pisces ");
        }
    }
else
{
    printf("Invalid month ");
}
}
