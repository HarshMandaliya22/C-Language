// Write a programe to print number in words only 2 digit number
// --> 71
// five six
#include <stdio.h>
void main()
{
     int number = 0;
     int first = 0, second = 0;
     printf("Enter any 2 digit number ");
     scanf("%d", &number);

     first = number / 10;
     second = number % 10;
     printf("The value of first is %d and second is %d \n", first, second);

     if (number < 0 && number >= 100)
     {
          printf("Invalid input ");
     }
     else
     {
          if (first == 1)
          {
               printf("One");
          }
          else if (first == 2)
          {
             printf("Two");
          }
          else if (first == 3)
          {
            printf("Three");
          }
          else if (first == 4)
          {
            printf("Four");
          }
          else if (first == 5)
          {
            printf("Five");
          }
          else if (first == 6)
          {
            printf("Six");
          }
          else if (first == 7)
          {
            printf("Seven");
          }
          else if (first == 8)
          {
            printf("Eight");
          }
          else if (first == 9)
          {
            printf("Nine");
          }
          else if (first == 0)
          {
            printf("Zero");
          }
          else if (second == 0)
          {
            printf("Zero");
          }


          if (second == 1)
          {
               printf("One");
          }
          else if (second == 2)
          {
               printf("Two");
          }
          else if (first == 3)
          {
            printf("Two");
          }
          else if (first == 4)
          {
            printf("Two");
          }
          else if (first == 5)
          {
            printf("Five");
          }
          else if (first == 6)
          {
            printf("Six");
          }
          else if (first == 7)
          {
            printf("Seven");
          }
          else if (first == 8)
          {
            printf("Eight");
          }
          else if (first == 9)
          {
            printf("Nine");
          }
     }
}
