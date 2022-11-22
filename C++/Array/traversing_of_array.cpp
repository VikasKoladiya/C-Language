#include<iostream>
using namespace std;
int main()
{
    int array[5]={1,2,3,4,5};

    // for loop
    /*for(int i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }*/

    // for each loop
    /*for(int a : array)
    {
        cout<<a;
    }*/

    // while loop
    int i=0;
    while(i<5)
    {
        cout<<array[i];
        i++;
    }
    return 0;
}
