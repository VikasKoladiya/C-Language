#include<iostream>
using namespace std;

int main()
{
    int a[8]={1,2,3,3,4,5,6,9},q,qa[8],count;
    cout<<"Enter query : ";
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        count=0;
        cin>>qa[i];
        
            for (int j = 0; a[j]!='\0'; j++)
            {
                if (a[j]==qa[i])
                {
                    count++;
                }
            }  
            cout<<count<<endl;
    }
}
