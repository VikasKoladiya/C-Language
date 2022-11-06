#include<iostream>
using namespace std;
int main()
{
    /*int digits=0,n;
    cout<<"enter number : ";
    cin>>n;
    while(n>0)
    {
        digits++;
        n=n/10;
    }
    cout<<"total digits of your number is : "<<digits;
    */

   // sum of given digits
   int lastdigit,n,sum=0;
   cout<<"Enter number : ";
   cin>>n;
   while(n>0)
   {
        lastdigit =n%10;
        sum+=lastdigit;
        n/=10;


   }
   cout<<sum;

   return 0;
}