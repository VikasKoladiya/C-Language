#include<iostream>
using namespace std;
int glo=12;
int neel()
{
    cout<<"\n "<<glo;
}
int main()
{
    int a=2,b=3,c=4;
    cout<<"here the value of a is "<<a<<" . the value os b is "<<b<<" . the value of c is "<<c;
    cout<<"\n "<<glo;
    int glo=56;
    cout<<"\n "<<glo;
    neel();
    return 0;
}