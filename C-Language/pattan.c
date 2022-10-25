#include<stdio.h>
#include<conio.h>
void main()
{
    // 1. 
    // i=row & j=colum(startline)
  /* int a;
    for (int i=1;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            printf("\t%d",i);
        }
        printf("\n");
    }*/
    


    // 2.
   /* int a;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("\t%d",j);
        }
        printf("\n");
    }*/


    //3.and 8
  /* int a;
    for(int i=2;i<=10;i++)
    {
        if(i%2==0)
        //if(i%2!=0)
        for(int j=1;j<=5;j++)
        {
            printf("\t%d",i);
        }
        printf("\n");
    }*/


    //4.
  /*int a;
   // printf("Enter your number :");
   // scanf("%d",&a);
    for(int i=1;i<=5;i)
    {
        for(int j=1;j<=5;j++)
        {
            printf("\t%d",a++);
        }
        printf("\n");
    }*/


    //5.
   /* int a;
    printf("Enter your number :");
    scanf("%d",&a);
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("\t%d",a++);
        }
        a+=5;
        printf("\n");
    }*/
    

    //6.
   /* int a;
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=5;j++)
        {
            printf("\t%d",i);
        }
        printf("\n");
    }*/


    //7.
   /* for(int i='A';i<='E';i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("\t%c",i);
        }
        printf("\n");
    }*/


    //9.
  /*  int a;
    printf("Enter your char : ");
    scanf("%c",&a);
    for(int i='A';i<='Z';i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("\t%c",i++);
        }
        printf("\n");
    }*/


    //10.
  /*8  int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i>=j)
            {
                printf("%d ",j);
            }
            else
            {
                printf("* ");
            }        
        }
        printf("\n");
    }*/


    //11.
   /* int i,j,k,a;
    printf("Enter your number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        k=i;
        for(j=0;j<=a;j++)
        {
            printf("\t%d ",k);
            k+=5;
        }
    printf("\n");
    }*/


    // 12. SATHIYO
   /* int r,c;
    for(r=1;r<=7;r++)
    {
        for(c=1;c<=7;c++)
        {
            if(c==4 || r==4 || (c==1 && r<=4) || (r==1 && c>=4) || (c==7 && r>=4) || (r==7 && c<=4))
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }*/
}
    
