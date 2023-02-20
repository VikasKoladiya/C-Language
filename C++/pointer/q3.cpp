#include<iostream>
using namespace std;
int find_number(int a,int b,int c,int *large)
{
    *large = max(a,max(b,c));
    return min(a,min(a,b));
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
     
    int larg;
    int smallest = find_number(a,b,c,&larg);
    cout<<"large : "<<larg<<"\n"<<"small : "<<smallest;
}