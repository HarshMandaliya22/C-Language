// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
#include <stdio.h>
void main()
{
    int number = 1;
    int count = 0;

    printf("%d", number);
    printf("\n");
    printf("%d", number);
    printf(" ");
    number = number + 1;
    printf("%d", number);
    number = 1;
    printf("\n");
    printf("%d", number);
    
    for (count = 0; count < 3; count++)
    {
        printf(" ");
    }
    // printf(" ");
    number = number + 2;
    printf("%d", number);
    number = 1;
    printf("\n");
    printf("%d", number);
    for (count = 0; count < 5; count++)
    {
        printf(" ");
    }
    // printf(" ");
    // printf(" ");
    number = number + 3;
    printf("%d", number);
    printf("\n");
    number = 1;
    printf("%d", number);
    for(count=0;count<4;count++)
    {
        number = number + 1;
        printf(" ");
        printf("%d", number);
    }
    // number = number + 1;
    // printf(" ");
    // printf("%d",number);
    // number = number + 1;
    // printf(" ");
    // printf("%d",number);
    // number = number + 1;
    // printf(" ");
    // printf("%d",number);
}