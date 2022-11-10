#include<stdio.h>
#include<conio.h>
/*void myfun()
{
    printf("\n\tmy name is vikas..");
}
void main()
{
    printf("Before using any function...");
    myfun(); // this is new function call
    printf("\nAfter using any function..");
}*/



// no parameter - no return   
// pr 1
/*void mysum()
{
    int a,b;
    printf("Enter number a :");
    scanf("%d",&a);
    printf("\nEnter number b : ");
    scanf("%d",&b);
    printf("\n\ta+b : %d",a+b);
    printf("\n\ta-b : %d",a-b);
    printf("\n\ta*b : %d",a*b);
    printf("\n\ta/b : %d",a/b);
}
void main()
{
    printf("printing any function\n");
    mysum();
    printf("\nend of mysum and star of main function");
}*/


// no return - with parameter
// pr 2
/*void dosum(int a,int b)
{
    printf("\n a + b : %d",a+b);
}
void main()
{
    int a,b;
    printf("\nEnter number a : ");
    scanf("%d",&a);
    printf("\nEnter number b : ");
    scanf("%d",&b);

    dosum(a,b); // aa method ma function ni under (a,b) ma call karvo 
}*/


// no parameter - with return
// pr 3
/*int dosum()
{
    int a,b;
    printf("Enter number a :");
    scanf("%d",&a);
    printf("\nEnter number b : ");
    scanf("%d",&b);

    return a+b;
}
void main()
{
    int sum;
    sum=dosum();
    printf(" a+b : %d",sum);

}*/


// with perameters - with return
// pr 4
int dosum(int x,int y) // aa kisha ma a and b ni alue x and y ma copy thase
{
    return x+y;
}
int main()
{
    int a,b,s;
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("\nEnter number b : ");
    scanf("%d",&b);
   
    s=dosum(a,b);
    printf("%d",s);
}