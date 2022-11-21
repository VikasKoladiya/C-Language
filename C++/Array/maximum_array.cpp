#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,max=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}