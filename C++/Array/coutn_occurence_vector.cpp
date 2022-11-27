// occurence etle ke apde user pase thi je number levi eni last position kevani

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(100);
    int n;
    cout<<"Enter vector's range : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int occ=0;
    for(int i=0;i<n;i++)
    {
        if(x==v[i])
        {
            occ++;
        }
    }
        cout<<"last position : "<<occ;
    
    return 0;
}