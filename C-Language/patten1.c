#include<stdio.h>
void main()
{
    int c=2,sp=6;;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<sp;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=i-1;j++)
        {
            printf("* ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            {
                printf("# ");
            }
            else
            {
                printf("& ");
            }
        }
        printf("\n");
        sp--;
    }
}