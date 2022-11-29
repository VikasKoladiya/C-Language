#include<iostream>
using namespace std;
int main()
{
    int max=0,secondmax,i,n,a[100];
    cout<<"Enter range of array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    secondmax=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>secondmax && a[i]!=max)
        {
            secondmax=a[i];
        }
    }
    cout<<secondmax;
    return 0;
}