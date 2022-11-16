#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,z,z1,z2,z3,z4,z5,z6,z7,z8,z9,z10;
    printf("THIS IS operators");
    printf("\nthis is arethmetic and relational operators");
    printf("\nenter number a :");
    scanf("%d",&a);
    printf("\nenter number b :");
    scanf("%d",&b);

    z=a+b;
    z1=a-b;
    z2=a*b;
    z3=a/b;
    z4=a%b;
    z5=a<b;
    z6=a>b;
    z7=a<=b;
    z8=a>=b;
    z9=a==b;
    z10=a!=b;
    printf("\n %d + %d = %d",a,b,z);
    printf("\n %d - %d = %d",a,b,z1);
    printf("\n %d * %d = %d",a,b,z2);
    printf("\n %d / %d = %d",a,b,z3); 
    printf("\n %d rem %d = %d",a,b,z4);
    printf("\n %d < %d = %d",a,b,z5);
    printf("\n %d > %d = %d",a,b,z6);
    printf("\n %d <= %d = %d",a,b,z7);
    printf("\n %d >= %d = %d",a,b,z8);
    printf("\n %d == %d = %d",a,b,z9);
    printf("\n %d != %d = %d",a,b,z10);
    

}