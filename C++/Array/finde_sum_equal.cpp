#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[100],n,i,j,x,count=0;
    cout<<"Enter range of array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter number ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x==(a[i]+a[j]))
            {
                count++;
            }
        }
    }
    cout<<"Total pairs is : "<<count;
    return 0;
}