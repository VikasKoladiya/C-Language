#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter number a : ";
    cin>>a;
    cout<<"Enter number b : ";
    cin>>b;
    cout<<"Befor swaping value of a is --> "<<a<<" value of b is --> "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swaping value of a is --> "<<a<<" value of b is --> "<<b<<endl;
    return 0;
}