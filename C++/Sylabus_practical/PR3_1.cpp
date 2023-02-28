#include<iostream>
using namespace std;
int main()
{
int no1=10, no2=12;
int &x=no1;
// int &r;
// int &c = NULL;
// int &d[2] = {no1,no2};
cout<<"x = "<< x+20;
cout<<"no1="<< no1+10;
return 0;
}