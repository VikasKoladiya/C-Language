#include<stdio.h>
#include<stdlib.h>
void main()
{
    int sum=0,*ptr,n,i;
    float avg;
    printf("\t\t22DCE044\n");
    printf("Enter number : ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
        sum+=*(ptr+i);
    }
    avg=(float)sum/n;
    printf("%f",avg);
}