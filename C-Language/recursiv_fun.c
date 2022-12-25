#include<stdio.h>
#include<conio.h>
// FECTORIAL
/*int factorial(int num)
{
    if(num==1)
    {
        return 1;
    }
    else 
    {
        return (num*factorial(num-1));
    }
}
void main()
{
        int num,fact;
        printf("Enter facrorial number : ");
        scanf("%d",&num);

        fact=factorial(num);
        printf("%d! = %d",num,fact);
    
}*/

// WINDING AND UN-WINDING
/*int rec(int n)
{
    printf("\n Winding %d",n);
    if(n<3)
    {
        rec(n+1);
    }
    else
    {
        return 1;
    }
    printf("\n un-winding %d",n);
}
void main()
{
    rec(1);
}*/

// FEBONAKI SERIRIS 
// aa program itresion ni ritepan thai te ne fo loop ni method kevay
int fibo(int n)
{
    if(n==1)
    {
        return n;
    }
    else if(n==0)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("%d ",fibo(n));

}


// PRIME NUMBER USING RECURSIVE
/*int prime(int n,int count)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            return count++;
        }
    }
    if(count==2 )
    {
        return n;
    }
    else
    {
        n=i;
        return n;
    }
}
void main()
{
    int n,count=0;
    printf("Enter number : ");
    scanf("%d",&n);
    prime(n,count);
     if(count==2 )
    {
        printf("%d is prime",n);
    }
    else
    {
        printf("%d is not prime",n);
    }
   
}*/