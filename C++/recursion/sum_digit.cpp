#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1 || n==2 || n==3 || n==4 || n==5 || n==6 || n==7 || n==8 || n==9)
        return n;
    else
    {
        return sum(n/10) + n%10;
    }
}
int main()
{
    int num;
    cin>>num;
    int ans = sum(num); 
    cout<<ans<<endl;
    return 0;
}