#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter day number : ";
    cin>>a;
    switch(a)
    {
        case 1:
            cout<<"Monday";
        break;

        case 2:
            cout<<"Tuesday";
        break;

        case 3:
            cout<<"Wendesday";
        break;

        case 4:
            cout<<"Thursday";
        break;

        case 5:
            cout<<"Friday";
        break;

        case 6:
            cout<<"Saturday";
        break;

        case 7:
            cout<<"Sunday";
        break;

        default :
            cout<<"You have enter wrong choice";
        break;
    }
    return 0;
}