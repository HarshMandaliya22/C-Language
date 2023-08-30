// Write a programe to take 5 name as input
#include <stdio.h>
void main()
{
    char name[5][20];
    int count = 0;
    int flash = 0;

    for (flash = 0; flash < 5; flash++)
    {
        printf("\nEnter your name %d : ", flash + 1);

        for (count = 0; count < 20; count++)
        {
            scanf("%c", &name[flash][count]);
            if (name[flash][count] == '\n')
            {
                break;
            }
        }
    }
    flash=0;
    count=0;
    for (flash = 0 ; flash < 5 ; flash++)
    {
        printf("\nYour Name %d is : %c",flash + 1,name[flash][count]);
        for (count = 0; count < 20; count++)
        {
            printf("%c", name[flash][count]);
            if (name[flash][count] == '\n')
            {
                break;
            }
        }
    }
}
