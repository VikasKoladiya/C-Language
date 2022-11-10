#include<iostream>
using namespace std;
int main()
{
    int n,power=1,ans=0,lastdigit,rev=0,rem,count=0;
    cout<<"Enter Desimal Number : ";
    cin>>n;
    while(n>0)
    {
        lastdigit=n%2;
        if(lastdigit==0)
        {
            count++;
        }
        ans+=lastdigit*power;
        power*=10;
        n/=2;
    }
    cout<<"Binary number is : "<<ans<<endl;
    cout<<"Total Zero in binary number is : "<<count<<endl;
   
    return 0;
} 