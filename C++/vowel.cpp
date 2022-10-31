#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    switch(ch)
    {
        case 'A':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'E':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'I':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'O':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'U':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'a':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'e':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'i':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'o':
            cout<<"this "<<ch<<" is vowel";
        break;

        case 'u':
            cout<<"this "<<ch<<" is vowel";
        break;

        default :
            cout<<"this "<<ch<<" is consonants";
        break; 
    }

    return 0;
}