#include<iostream>
using namespace std;
int a=1,b=1;
class student
{
    public:
    string name;
    string _class;
    string roll_no; 
    char division;
    void read();
    void display(); 
};
void student :: read()
{
    cout<<"Student "<<a++<<endl;
    cout<<"Student name : ";
    cin>>name;
    fflush(stdin);
    cout<<"Class : ";
    cin>>_class;
    fflush(stdin);
    cout<<"Roll no : ";
    cin>>roll_no;
    cout<<"Divsion : ";
    cin>>division;
}
void student :: display()
{
    cout<<"Student "<<b++<<endl;
    cout<<"Student name : ";
    cout<<name<<endl;
    cout<<"Class : ";
    cout<<_class<<endl;
    cout<<"Roll no : ";
    cout<<roll_no<<endl;
    cout<<"Divsion : ";
    cout<<division<<endl;
}
int main()
{
    class student s1,s2,s3,s4,s5;;
    cout<<"\t\t22DCE044"<<endl;
    s1.read();
    s2.read();
    s3.read();
    s4.read();
    s5.read();
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    return 0;
}