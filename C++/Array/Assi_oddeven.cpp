#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],n,i,j;
    cout<<"Enter range of area : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Even is : "<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<endl;
        }
    }
    cout<<endl<<"odd is : "<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}