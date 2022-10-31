#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c,z;
    printf("THIS PROGRAM IS QESTION 6.");
    printf("\nEnter number a : ");
    scanf("%d",&a);
    printf("\nEnter number b : ");
    scanf("%d",&b);
    z=a*b;
    c=a+b;
    if(z%c==0)
    {
        printf("\nthis value %d is divisible by its addition value %d",z,c);
    }
    else
    {
        printf("\nthis value %d is not divisible by its addition value %d",z,c);
    }
    

}