#include<iostream>
using namespace std;
// here we can use call by reference
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    cin>>a>>b;

    // here we have two method to transfer address from onr function to other function
    // 1. this method is directly sent address of varible to second function
    //swap(&a,&b);

    // 2. this is second method to pass address here first we can intialized pointer an then
    //    we must be store address of variable and then pass address through pointer
    int *p1 = &a;
    int *p2 = &b;
    swap(p1,p2); 

    cout<<a<<" "<<b;
     
}