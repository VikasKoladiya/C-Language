#include<stdio.h>
#define N 50
void main()
{
    int i,j,a[N][N],b[N][N],ans[N][N],m,n,p,q;
    printf("Enter first metrix : \n");
    printf("Enter row : ");
    scanf("%d",&m);
    printf("Enter column : ");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second metrix : \n");
    printf("Enter row : ");
    scanf("%d",&p);
    printf("Enter column : ");
    scanf("%d",&q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst metrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    printf("\nSecond metrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",b[i][j]);
        }
    printf("\n");
    }
    if(n!=p)
    {
        printf("\nmultification is not posible\n");
    }
    else
    {
    printf("\nMultifiaction of two metrix is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            int sum=0;
            for(int k=0;k<n;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            ans[i][j]=sum;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    }
}