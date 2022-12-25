#include<stdio.h>
#include<conio.h>
/*int poin(int *a)
{
    return *a;
}
void main()
{
    int i,*p;
    int a[5]={1,2,3,4,5};

    p=a;
    poin(a);
    for(i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
}*/

int point(int a)
{
    return a;
}
void main()
{
    int i,*p;
    int a[5]= {1,2,3,4,5};
    p=&a;
    point (a);
    for(i=0; i<5; i++)
    {
        printf("%d ",*(p+i));
    }
}
