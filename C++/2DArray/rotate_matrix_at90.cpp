#include<iostream>
#include<vector>
using namespace std;
void rotatedmatrix(vector<vector<int>> &vec)
{
    int n = vec.size();
    // transpose
    // here we have 2 metod to covert in transpose
    // 1. change row -> column and column -> row
    // 2. using swap function
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(vec[i][j],vec[j][i]);
        }
    }

    // reverse
    // for(int i=0;i<n;i++)
    // {
    //     reverse(vec.begin(),vec.begin());
    // }
}
int main()
{
    int n;
    cin>>n;
    
    vector<vector<int>> v(n,vector<int>(n));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<endl<<"Martix is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    rotatedmatrix(v);
    cout<<endl<<"Rotated matrix is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}