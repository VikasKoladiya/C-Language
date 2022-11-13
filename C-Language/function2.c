#include<stdio.h>
#include<conio.h>
// npnr
/*void oddeven()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\n %d is even",a);
    }
    else 
    {
        printf("\n %d is odd",a);
    }
}
void main()
{
    oddeven();
}*/

//npwr
/*int oddev()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);

    return a;
}
void main()
{
    int a,s;
    s=oddev();
    if(s%2==0)
    {
        printf("\n %d is even",s);
    }
    else 
    {
        printf("\n %d is odd",s);
    }
}*/


// wpnr
/*void odev(int a)
{
    if(a%2==0)
    {
        printf("\n %d is even ",a);
    }
    else
    {
        printf("\n %d is odd ",a);
    }
}
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    odev(a);
}*/


// wpwr
int devod(int a)
{
    if(a%2==0)
    {
        printf("%d is even ",a);
    }
    else 
    {
        printf(" %d is odd ",a);
    }
}
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    devod(a);
}