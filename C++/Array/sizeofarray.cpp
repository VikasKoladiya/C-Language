#include<iostream>
using namespace std;
int main()
{
    int array[5]={1,2,3,4,5};
    //size of array
    cout<<sizeof(array)<<endl;

    //length of array
    cout<<sizeof(array)/sizeof(array[0]);
    return 0;
}