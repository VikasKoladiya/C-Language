#include<iostream>
using namespace std;
struct College_details
{
    char college_name[10],college_code[10],deparment[5];
    int intake;
};

int main()
{
    struct College_details c;
    cout<<"\t\t22DCE044"<<endl;
    cout<<"+++++ Enter the College Information +++++"<<endl;
    cout<<"Name of the college : ";
    cin>>c.college_name;
    cout<<"College code : ";
    cin>>c.college_code;
    cout<<"Department : ";
    cin>>c.deparment;
    cout<<"Department In-take : ";
    cin>>c.intake;
    cout<<"********* Enter the College Information *********"<<endl;
    cout<<"Name of the college : "<<c.college_name<<endl;
    cout<<"College code : "<<c.college_code<<endl;
    cout<<"Department : "<<c.deparment<<endl;
    cout<<"Department In-take : "<<c.intake<<endl;

    return 0;
}