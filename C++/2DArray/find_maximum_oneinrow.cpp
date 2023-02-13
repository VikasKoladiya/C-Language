#include<iostream>
#include<vector>
using namespace std;
// Lecture 19
// leftmaximum 1

int numberofonesinrow(vector<vector<int>> &v)
{
    int numberofone;
    int maximumone=INT16_MIN;
    int row=-1;
    int column=v[0].size();
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==1)
            {
                numberofone = column-j; 
                if(numberofone > maximumone)
                {
                    maximumone = numberofone;
                    row=i;
                }
            }
        }
    }
    return row;
}
int main()
{
    int n,m;
    cout<<"Enter row and column : ";
    cin>>n>>m;
    
    vector<vector<int>> v(n,vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    int result=numberofonesinrow(v);
    if(result==-1)
        cout<<"one is not present in array";
    else
        cout<<"maximum one is present in "<<result+1<<"th row";
    
}