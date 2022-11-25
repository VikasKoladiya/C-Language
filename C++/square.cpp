#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1,i;
    cout<<"Enter number : ";
    cin>>a;
    cout<<"Enter power of number : ";
    cin>>b;
    if(b==1)
    {
        cout<<a;
    }
    else
    {
        for(i=1;i<=b;i++)
        {
            c*=a;
        }
    }
    cout<<a<<" raise to "<<b<<" is : "<<c;
    return 0;
}