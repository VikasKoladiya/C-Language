#include <iostream>
#include<vector>
using namespace std;
int main()
{
    /*vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    int k=2;
    k=k%a.size();
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());

    for(int v:a)
    {
       cout<<a<<" ";
    }
    cout<<endl;*/


    // sceond method
    int a[100],n,ans[100],i,k;
    cout<<"Enter range of array :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter rotate element number : ";
    cin>>k;
    k=k%n;
    cout<<"k is : "<<k<<endl;
    int j=0;
    for(i=n-k;i<n;i++);
    {
        ans[j++]=a[i];
    }
    j=0;
    for(i=k;i<n;i++)
    {
        ans[i]=a[j];
        j++;
    }
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}