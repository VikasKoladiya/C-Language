#include<iostream>
using namespace std;
int main()
{
    char vowels[5];
    // input using for loop
    /*for(int i=0;i<5;i++)
    {
        cin>>vowels[i];
    }*/

    // input using for each loop
    for(char &element:vowels)
    {
        cin>>element;
    }
    // Printing Section
    for(int i=0;i<5;i++)
    {
        cout<<vowels[i]<<endl;
    }
    return 0;
}