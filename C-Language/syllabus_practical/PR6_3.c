#include<stdio.h>
void main()
{
    int q,price,total=0;
    while(1)
    {
        printf("Enter Quantity is : ");
        scanf("%d",&q);
        if(q!=0)
        {
            printf("Enter price : ");
            scanf("%d",&price);
            printf("Quantity is : %d and its price is : %d\n",q,price);
            total+=(price*q);
        }
        else
        {
            break;
        }
    }
    printf("\ntotal bill is : %d",total);
}