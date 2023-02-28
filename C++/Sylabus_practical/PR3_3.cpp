#include<iostream>
using namespace std;
int main()
{
    int n,*p;
    cout<<"\t22DCE044"<<endl;
    cin>>n;
    p = new int[n];
    cout<<"Enter "<<n<<" element only"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    // adding 2 in each elememt
    for(int i=0;i<n;i++)
    {
        p[i]+=2;
        cout<<p[i]<<" ";
    }
    cout<<endl;

    delete[] p;
    return 0;
}