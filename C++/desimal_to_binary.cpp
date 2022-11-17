#include<iostream>
using namespace std;
int main()
{
    int n,power=1,ans=0,lastdigit,rev=0,rem;
    cout<<"Enter Desimal Number : ";
    cin>>n;
    while(n>0)
    {
        lastdigit=n%2;
        ans+=lastdigit*power;
        power*=10;
        n/=2;
    }
    cout<<"Binary number is : "<<ans<<endl<<endl;
   
    return 0;
} 
