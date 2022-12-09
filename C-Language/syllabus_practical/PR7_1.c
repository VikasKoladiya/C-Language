#include<stdio.h>
void main()
{
    int array[25];
    int i,p=0,n=0,e=0,o=0;
    printf("Enter array\n");
    for(i=0;i<25;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<25;i++)
    {
        if(array[i]>0) p++;
        else n++;

        if(array[i]%2==0) e++;
        else o++;
    }
    printf("Total positive number is : %d\n",p);
    printf("Total negative number is : %d\n",n);
    printf("Total even number is : %d\n",e);
    printf("Total odd number is : %d\n",o);

}