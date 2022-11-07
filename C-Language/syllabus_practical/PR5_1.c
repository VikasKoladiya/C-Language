#include <stdio.h>
void main()
{
    int height;
    printf("enter your height:");
    scanf("%d", &height);
    if (height < 150)
    {
        printf("your height is %d so you are dwarf.", height);
    }
    else if (height >= 150 && height < 165)
    {
        printf("your height is %d so you are average.", height);
    }
    else if (height >= 165 && height < 195)
    {
        printf("your height is %d so you are tall.", height);
    }
    else
    {
        printf("abnormal height.");
    }
}