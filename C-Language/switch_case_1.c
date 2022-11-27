#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a,b,ch;
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);
    printf("\n 0. Exit");
    printf("\n 1. Addition");
    printf("\n 2. substract");
    printf("\n 3. mulatification");
    printf("\n 4. division");

while(1)
{
    printf("\nEnter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("\n %d + %d = %d",a,b,a+b);
        break;
        case 2:
        printf("\n %d - %d = %d",a,b,a-b);
        break;
        case 3:
        printf("\n %d * %d = %d",a,b,a*b);
        break;
        case 4:
        printf("\n %d / %d = %d",a,b,a/b);
        break;
        case 0:
        exit(0);
        break;
        default:
        printf("\n your choice is wrong !!!");
        break;
    }
}
}