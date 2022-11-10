#include<iostream>
using namespace std;
int main()
{
    int rev=0,rem,num;
    cout<<"Enter number : ";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    cout<<"revers number is : "<<rev;

    return 0;
}