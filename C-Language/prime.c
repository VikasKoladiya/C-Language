#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("enter value - ");
    scanf("%d",&n);
    int c;
    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
            c++;
            }
        }
        if(c==0)
        {
            printf("%d ",i);
        }
    }
    
}