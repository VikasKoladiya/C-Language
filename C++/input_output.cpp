#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the value of num. 1 : ";      // Is '<<' called Insertion operators
    cin>>num1;                                 // Is '>>' called Extraction operators
    cout<<"Enter the value of num. 2 : ";
    cin>>num2;

    cout<<"\nthe sum of num1+num2 = "<<num1+num2;
    return 0;
}