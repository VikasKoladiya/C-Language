#include<iostream>
using namespace std;
int power(int p,int q)
{
    if(q==0)
        return 1;
    else
        return power(p,(q-1))*p;
}
int main()
{
    int p,q;
    cin>>p>>q;
    cout<<power(p,q);
}