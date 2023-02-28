#include<iostream>
using namespace std;
class swap1
{
    public:
    void display()
    {
        int a,b;
        cout<<"\t22DCE044"<<endl;
        cout<<"Enter a & b : ";
        cin>>a>>b;
        cout<<"Befor Swapping a : "<<a<<endl<<"Befor Swapping b : "<<b<<endl;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"After Swapping a : "<<a<<endl<<"After Swapping b : "<<b<<endl;
    }

};
int main()
{
    swap1 s1;
    s1.display();
    return 0;
}