#include<stdio.h>
void main()
{
    int n,count=1,lastdigit,firstdigit,rem,rev=0,secondlast;
    int pow=1,ans,a,count1=1,onebyonedigit,pow2=1;
    printf("Enter number : ");
    scanf("%d",&n);
    a=n;
    lastdigit=n%10;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
        count++;
    }

    firstdigit=rev%10;
    count=count-2;
    for(int i=1;i<=count;i++)
    {
        pow=pow*10;
        count1++;

    }
    ans=lastdigit*pow;
    secondlast=a%pow;
    count=1;
    rev=0;
    while(secondlast>0)
    {
        rem=secondlast%10;
        rev=rev*10+rem;
        secondlast/=10;
        count++;
    }
    for(int i=1;i<count-1;i++)
    {
        pow2=pow2*10;
    }
    secondlast=rev%pow2;
    while(secondlast>0)
    {
        onebyonedigit=secondlast%10;
        ans+=onebyonedigit*pow2;
        pow2/=10;
        secondlast/=10;
    }
    ans=ans+firstdigit;
    printf("%d",ans);

}