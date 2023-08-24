// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6

#include <stdio.h>
void main()
{
    int num = 0;
    int count = 0;
    int flash = 0;

    while (flash < 7)
    {
        while (count < flash)
        {
        
            printf("%d ", num);
            count = count + 1;
        }
        printf("\n");
        count = 0;
        num = num + 1;
        flash = flash + 1;
    }
}
