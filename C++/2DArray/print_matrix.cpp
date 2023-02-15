#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> creatmatrix(int n){
    vector<vector<int>> v(n,vector<int>(n));
    int top = 0;
    int bottom = v.size()-1;
    int right = v[0].size()-1;
    int left = 0;
    int direction = 0;
    int value = 1;
    cout<<endl<<"Answer is : "<<endl;
    while((left<=right) && (top<=bottom))
    {
        // left -> right
        if(direction==0){
            for(int col=left;col<=right;col++)
            {
                v[top][col]=value++;
            }
            top++;
        }

        // top -> bottom
        else if(direction==1)
        {
            for(int row=top;row<=bottom;row++)
            {
                v[row][right]=value++;
            }
            right--;
        }

        // right -> left
        else if(direction==2)
        {
            for(int col=right;col>=left;col--)
            {
                v[bottom][col]=value++;
            }
            bottom--;
        }

        // bottom -> top
        else
        {
            for(int row=bottom;row>=top;row--)
            {
                v[row][left]=value++;
            }
            left++;
        }
        direction = (direction+1) % 4;
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));

    v = creatmatrix(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
