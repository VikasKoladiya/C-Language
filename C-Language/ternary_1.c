#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Enter c : ");
    scanf("%d",&c);
    (a>b && a>c)?printf("a(%d) is big",a):(b>c)?printf("b(%d) is big",b):printf("c(%d) is big",c);
}