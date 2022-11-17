#include<stdio.h>
#include<conio.h>
int *sqr(int *p)
{
    int i;
    for(i=0;i<=5;i++)
        p[i]=p[i]*p[i];
    return p;
}
void main()
{
    int *n,arr[6];
    printf("Enter the element of array : ");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    n=sqr(arr);
    printf("\n Eelement of arr is : ");
    for(int i=0;i<=5;i++)
    {
        printf("%d ",n[i]);
    }
}

// ani vadhare information note ma pointertoarry name na topic ma aapeli che
