#include<stdio.h>
void main()
{
    int order,stock=100;
    char credit;
    printf("Y or y is for Yes\nN or n is for No\n\n");
    printf("Enter your credit in y and n : ");
    scanf("%c",&credit);
    if(credit=='N' || credit=='n')
    {
        printf("\nYou selected NO credit option");
    }
    else
    {
        
        if(credit=='Y' || credit=='y')
        {
            while(stock>0){
            printf("\nEnter your order : ");
            scanf("%d",&order); 
            if(order<=stock)
            {
                printf("\nYour order %d is in stock\n\tSo You have receved your order",order);
                stock=stock-order;
                printf("\nAvailable stock is %d",stock);
            }
            else
            {
                printf("\nYour order is %d but stock is %d",order,stock);
                printf("\nYour Balance will be refended by the way sorry for the less stock...");
            }
            }

        }
        else
        {
            printf("\nYou are not select Right Credit ");
        }
    }
        }
