#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    cout<<"    22DCE044"<<endl<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cout<<setw(4)<<j*i;
        }
        cout<<endl;
    }    
    return 0;
}
    
