#include<iostream>
using namespace std;
int main()
{
    int i,j,a[5]={1,2,3,4,5},b[100],n,count=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            count=a[i];
            cout<<a[i]<<" ";
        }
        else
        {
            cout<<count<<" ";
        }   
    }
    return 0;
}