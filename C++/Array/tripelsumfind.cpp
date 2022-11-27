#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[100],n,x,i,j,k,count=0;
    cout<<"Enter rage of array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter target sum value : ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(x==(a[i]+a[j]+a[k]))
                {
                    count++;
                }
            }
        }
    }
    cout<<"total pairs of sum is : "<<count;
    return 0;
}