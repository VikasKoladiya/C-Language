#include<iostream>
#include<vector>
using namespace std;
// This is one side sorting method means one pointer ethod
// first method using vector
void sizeofzeroandone(vector<int> &v)
{
    int zerocount=0;
    for(int ele:v)
    {
        if(ele==0)
        {
            zerocount++;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(i<zerocount)
        {
            v[i]=0;
        }
        else
        {
            v[i]=1;
        }
    } 
}
int main()
{
    int n;
    vector<int> v;
    cout<<"Enter range of array : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sizeofzeroandone(v);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

// secong method using array
/*
int main()
{
    int a[100],n,i,j;
    cout<<"Enter range of array :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}*/


// This is two side sorthing array means using two pointer
/*void sizeofzeroandone(vector<int> &v)
{
    int leftpointer=0;
    int rightpointer=v.size()-1;
    // swapping part
    while(leftpointer<rightpointer)
    {
        if(v[leftpointer]==1 && v[rightpointer]==0)
        {
            v[leftpointer]=0;
            v[rightpointer]=1;
            leftpointer++;
            rightpointer--;
        }
        if(v[leftpointer]==0)
        {
            leftpointer++;
        }
        if(v[rightpointer]==1)
        {
            rightpointer--;
        }
    }
    return;
}
int main()
{
    int n;
    vector<int> v;
    // input array from user
    cout<<"Enter range of array : ";
    cin>>n;
    cout<<"You should enter only 0 and 1 ."<<endl<<"--------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    // function calling 
    sizeofzeroandone(v);

    // printing array
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}*/
