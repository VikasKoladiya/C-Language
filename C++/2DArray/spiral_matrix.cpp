#include<iostream>
#include<vector>
using namespace std;
void spiralmatrix(vector<vector<int>> &v){
    int top = 0;
    int bottom = v.size()-1;
    int right = v[0].size()-1;
    int left = 0;
    int direction = 0;
    cout<<endl<<"Answer is : ";
    while((left<=right) && (top<=bottom))
    {
        // left -> right
        if(direction==0){
            for(int col=left;col<=right;col++)
            {
                cout<<v[top][col]<<" ";
            }
            top++;
        }

        // top -> bottom
        else if(direction==1)
        {
            for(int row=top;row<=bottom;row++)
            {
                cout<<v[row][right]<<" ";
            }
            right--;
        }

        // right -> left
        else if(direction==2)
        {
            for(int col=right;col>=left;col--)
            {
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }

        // bottom -> top
        else
        {
            for(int row=bottom;row>=top;row--)
            {
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1) % 4;
    }
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
            cout<<v[i][j]<<"  ";
        }cout<<endl;
    }

    spiralmatrix(v);
}
