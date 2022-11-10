#include<iostream>
using namespace std;
int main()
{
    int sum=0,ans=0,power=1,i,n,lastdigit;
    cout<<"Enter number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum up to given number is : "<<sum<<endl;
    while(sum>0)
    {
        lastdigit=sum%2;
        ans+=lastdigit*power;
        power*=10;
        sum/=2;
    }
    cout<<"Binary of sum is : "<<ans;
    return 0;
}