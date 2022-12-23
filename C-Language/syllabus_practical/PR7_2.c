#include<stdio.h>
void main()
{
    int a[100],b[100],ans[100];
    int size1,size2;    
    printf("\t\t22DCE044\n");   
    printf("Enter size of 1st array : ");
    scanf("%d",&size1);
    printf("Enter size of 2nd array : ");
    scanf("%d",&size2);
    printf("First array\n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nSecond array\n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }
    int j=0;
    for(int i=0;i<size1;i++)
    {
        ans[j]=a[i];
        j++;
    }
    for(int i=0;i<size2;i++)
    {
        ans[j]=b[i];
        j++;
    }
    printf("\nFinal array : ");
    for(int i=0;i<j;i++)
    {
        for(int k=i+1;k<j;k++)
        {
            if(ans[i]>ans[k])
            {
                int temp;
                temp=ans[i];
                ans[i]=ans[k];
                ans[k]=temp;
            }
        }
        printf("%d ",ans[i]);
    }
    
}