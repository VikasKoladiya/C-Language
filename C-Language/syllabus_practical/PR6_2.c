#include<stdio.h>
void main()
{
    int a,b,i,c=1;
    printf("Enter Frist number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    i=0;
    while(i<b)
    {
        c=c*a;
        i++;
        printf("%d\t",c);
    }
    printf("\n%d",c);
}