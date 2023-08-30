// Write a programe to take 5 student 5 subject marks
#include <stdio.h>
void main()
{
    int student[5][5];
    int count = 0;
    int flash = 0;
    int total[5]=0;

    for (flash = 0; flash < 5; flash++)
    {
        printf("Enter marks of Student %d", flash + 1);

        for (count = 0; count < 5; count++)
        {
            printf("\nEnter the marks of subject %d : ", count + 1);
            scanf("%d", &student[flash][count]);
        }
    }

    for (flash = 0; flash < 5; flash++)
    {
        printf("\nThe marks of student %d are ", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nSubject %d = %d", flash + 1, student[flash][count]);
        }
    }
    printf("\n___________________________________________________________");

    for (flash = 0; flash < 5; flash++)
    {
        total[flash] = 0;
        for (count = 0; count < 5; count++)
        {
            total[flash] = total[flash] + student[flash][count];
        }
    }
    for (count = 0 ; count < 5 ; count++)
    {
        printf("\nThe total of student %d is %d",count+1 , total[count]);
    }
    // printf("\nThe total of student 2 is %d", total[1]);
    // printf("\nThe total of student 3 is %d", total[2]);
    // printf("\nThe total of student 4 is %d", total[3]);
    // printf("\nThe total of student 5 is %d", total[4]);
    // total[1] = 0;
    // for (count = 0; count < 5; count++)
    // {
    //     total[1] = total[0] + student[1][count];
    // }
    // total[2] = 0;
    // for (count = 0; count < 5; count++)
    // {
    //     total[1] = total[0] + student[2][count];
    // }
    // total[3] = 0;
    // for (count = 0; count < 5; count++)
    // {
    //     total[1] = total[0] + student[3][count];
    // }
    // total[4] = 0;
    // for (count = 0; count < 5; count++)
    // {
    //     total[1] = total[0] + student[4][count];
    // }
    // total[2] = total[1] + student[0][1];
    // total[3] = total[2] + student[0][2];
    // total[4] = total[3] + student[0][3];
    // total[5] = total[4] + student[0][4];
}