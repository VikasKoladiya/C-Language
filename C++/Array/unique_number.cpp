#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[100],i,n,j,count=0;
    cout<<"Enter range of array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=-1;
                a[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       if(a[i]>0)
       {
            count=a[i];
       }
    }
    cout<<endl<<count;
    return 0;
}