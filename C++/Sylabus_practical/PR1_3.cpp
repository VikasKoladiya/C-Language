#include<iostream>
#include<iomanip>

using namespace std;
int main()
{

    float a,b,*d,*c;
    cout<<"22DCE044"<<endl;
    cin>>a>>b;
    c=&a;
    d=&b;
    cout <<fixed<<*c+*d<<endl;
    cout<<defaultfloat <<scientific<<*c + *d<<endl;
    cout<<defaultfloat<<setprecision(2)<<*c+*d<<endl;   
    cout<<endl<<endl;    
    cout<<defaultfloat <<scientific<<*c+*d<<endl;
    cout<<defaultfloat <<fixed<<*c + *d<<endl;
    cout<<defaultfloat << setprecision(2)<<*c + *d<<endl;

}

