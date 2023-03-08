#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return sum(sum((n+1)/2*(n/2)));
}
int main()
{
    int n;
    cin>>n;
    int sum(n);
    cout<<sum;
    return 0;
}