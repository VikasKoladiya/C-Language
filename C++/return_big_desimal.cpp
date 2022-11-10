#include<iostream>
using namespace std;
int main()
{
    int n,m,power=1,ans=0,lastdigit,rev=0,rem;
    cout<<"Enter First Binary Number : ";
    cin>>n;
    cout<<"Enter Second Binary Number : ";
    cin>>m;
    if(n>=m)
    {
        while(n>0)
        {
            lastdigit=n%10;
            ans+=lastdigit*power;
            power*=2;
            n/=10;
        }
        cout<<"Desimal number is : "<<ans<<endl<<endl;
    }
    else
    {
        while(m>0)
        {
            lastdigit=m%10;
            ans+=lastdigit*power;
            power*=2;
            m/=10;
        }
        cout<<"Desimal number is : "<<ans<<endl<<endl;
    }
    
    return 0;
}