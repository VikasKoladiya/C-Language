#include<iostream>
using namespace std;
// lecture number is 25 code minutes in lecture is 23:50
void findingpositionofa(string s,char ch,int *p1,int *p2)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==ch)
        {
            *p1 = i;
            break;
        }
    }

    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==ch)
        {
            *p2 = i;
            break;
        }
    }
}
int main()
{
    string s = "baaaacaakmmk";
    char ch = 'a';
    int first_position;
    int second_position;

    int *p1 = &first_position;
    int *p2 = &second_position;
    findingpositionofa(s,ch,p1,p2);

    cout<<"Using pointer : "<<*p1<<"  "<<*p2;

    cout<<endl<<"using variable : "<<first_position<<"  "<<second_position;
}