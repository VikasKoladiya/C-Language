#include<iostream>
using namespace std;
int main()
{
    int n,power=1,ans=0,lastdigit,rev=0,rem;
    cout<<"Enter Binary Number : ";
    cin>>n;
    while(n>0)
    {
        lastdigit=n%10;
        ans+=lastdigit*power;
        power*=2;
        n/=10;
    }
    cout<<"Desimal number is : "<<ans<<endl<<endl;
   
    return 0;
}