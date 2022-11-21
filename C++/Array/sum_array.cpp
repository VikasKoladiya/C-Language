#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,sum=0;
    cout<<"Enter range of entring value : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum of given number : "<<sum<<endl;
    return 0;
}