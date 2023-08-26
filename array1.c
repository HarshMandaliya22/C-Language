// Write a programe to store 5 subject marks for 1 student and also find total and average
#include <stdio.h>
void main()
{
    int marks[5];
    int count = 0;
    int total = 0;
    int average =0;

    for (count = 0; count < 5; count++)
    {
        printf("Enter the marks of subject %d = ",count+1);
        scanf("%d", &marks[count]);
    }
    // printf("Enter the marks of subject 2 = ");
    // scanf("%d",&marks[1]);
    // printf("Enter the marks of subject 3 = ");
    // scanf("%d",&marks[2]);
    // printf("Enter the marks of subject 4 = ");
    // scanf("%d",&marks[3]);
    // printf("Enter the marks of subject 5 = ");
    // scanf("%d",&marks[4]);

    for (count = 0 ; count < 5; count++)
    {
        printf("\nMarks of Subject %d is = %d",count+1,marks[count]);
    }
    // printf("\nMarks of Subject 2 is = %d", marks[1]);
    // printf("\nMarks of Subject 3 is = %d", marks[2]);
    // printf("\nMarks of Subject 4 is = %d", marks[3]);
    // printf("\nMarks of Subject 5 is = %d", marks[4]);
    
    total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    printf("\nTotal of marks is = %d",total);

    average = (total/5);
    printf("\nAverage of marks is = %d",average);
}