/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[100],n,i,j,max=0,min=0;
    cout<<"Enter range of array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            a[i]=-1;
            // min=i;
        }
    }
    //a[min]=-1;
    //cout<<min<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]>max && a[i]!=-1)
        {
            min=a[i];  
        }   
    }
    cout<<min;
    return 0;
}*/


// using function 

#include<iostream>
using namespace std;
int largest(int array[],int size)
{
    int n=size;
    int max=0,maxindex=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main()
{
    int array[100],n;
    cout<<"Enter range of array : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int large=largest(array,n);
    cout<<array[large]<<endl;
    // aa jayare max value ek kato ekthi vadhare hoi tyare kam aave
    // second method secondlargeuniue name ni file ma che
    for(int i=0;i<n;i++)
    {
        if(array[i]==large)
        {
            array[large]=-1;
        }
    }
    int secondlarge=largest(array,n);
    cout<<array[secondlarge]<<endl;
    return 0;
}
