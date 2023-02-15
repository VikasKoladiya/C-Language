#include<iostream>
#include<vector>
using namespace std;
// Herewehave total two methos to solve this question
// 1. using simple method loop
// 2. using prefixsum or postfix sum's concept
// in second method we have 3 method -> 1. row prefixsum
//                                      2. column prefixsum
//                                      3. row-column prefixsum

// 1. using loop simple method
/*int sumofmatrix(vector<vector<int>> &v,int l1,int r1,int l2,int r2)
{
    int sum=0;
    // for(int i=l1;i<=l2;i++)
    // {
    //     for(int j=r1;j<=r2;j++)
    //     {
    //         sum+=v[i][j];
    //     }
    // }

    // 2. using prefixsum
    //  --> 1. row prefixsum
    int n = v.size();
    int m = v[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0)
            {
                continue;
            }
            else
            {
                v[i][j]=v[i][j-1]+v[i][j];
            }
        }
    }

    cout<<"Pre sum matrix : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    // r1=1 , l1=1 , l2=2 , r2=2
    for(int i=l1;i<=l2;i++)
    {
        if(r1!=0)
            sum+=(v[i][r2]-v[i][r1-1]);
        else
            sum+=v[i][r2];
    }
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }

    cout<<"Matrix is : "<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    int sum = sumofmatrix(v,l1,r1,l2,r2);
    cout<<sum<<endl; 
}*/

int sumofmatrix(vector<vector<int>> &v,int l1,int r1,int l2,int r2)
{
    int sum=0;
    // 2. using prefixsum
    //  --> 3. row-column prefixsum
    int n = v.size();
    int m = v[0].size();
    // row prefixsum
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0)
            {
                continue;
            }
            else
            {
                v[i][j]=v[i][j-1]+v[i][j];
            }
        }
    }

    // column prefixsum
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0)
            {
                continue;
            }
            else
            {
                v[i][j]=v[i-1][j]+v[i][j];
            }
        }
    }

    // printing matrix
    cout<<"Pre sum matrix : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    // finding sum logic for row-column matrix
    // r1=1 , l1=1 , l2=2 , r2=2
    int top_sum=0 , left_sum=0 , topleft_sum=0;
    if(l1!=0) top_sum = v[l1-1][r2];
    if(r1!=0) left_sum = v[l2][r1-1];
    if(l1!=0 && r1!=0) topleft_sum = v[l1-1][r1-1];
    if(l1==0 && r1==0) sum = v[l2][r2];
    if(l1!=0 || r1!=0) sum = v[l2][r2] - top_sum - left_sum + topleft_sum;
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }

    cout<<"Matrix is : "<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    int sum = sumofmatrix(v,l1,r1,l2,r2);
    cout<<sum<<endl; 
}