#include<iostream>
using namespace std;
int main()
{
    /*int boys=17,girls,total=45;
    total=(80*45)/100;      //student have 'A'grade
    girls=total-boys;       // girls have 'A' grade
    cout<<girls<<endl;  */

    int total, boys, girls;
    boys = 17;
    total = (80*45)/100;    //total students getting grade A
    girls = total - boys;   //total number of girls getting grade A
    cout << "Number of girls getting grade A = " << girls << endl;
    return 0;
}
