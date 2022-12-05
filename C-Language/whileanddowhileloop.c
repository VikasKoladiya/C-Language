#include<stdio.h>
#include<conio.h>
void main()
{

    // 1.  & 2.
 /*   int i,j;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf(" %d",j);
            // printf(" %d",i);
            j++;
        }
        printf("\n");
        i++;
    }

    i=1;
    do
    {
        j=1;
        do
        {
            printf(" %d",j);
            // printf(" %d",i);
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5); */


    //3.
  /*  int i,j;
    i=5;
    while(i>=1)
    {
        j=i;
        while(j<=5)
        {
            printf(" %d",i);
            j++;
        }
        printf("\n");
        i--;
    }

    i=5;
    do
    {
        j=i;
        do
        {
            printf(" %d",i);
            j++;
        }while(j<=5);
        printf("\n");
        i--;
    }while(i>=1); */

    //6.
  /*  int i,j;
    i='A';
    while(i<='E')
    {
        j='A';
        while(j<=i)
        {
            
            printf(" %c",j);
            j++;
        
        }
        printf("\n");
        i++;
        
    } 

    i='A';
    do
    {
        j='A';
        do
        {
            printf(" %c",j);
            j++;
        } while (j<=i);
        printf("\n");
        i++;
    }while(i<='E'); */

    // 10.
 /*   int i,j;
    i=5;
    while(i>=1)
    {
        j=i;
        while(j<=5)
        {
            printf(" %d",j);
            j++;
        }
        printf("\n");
        i--;
    }

    i=5;
    do
    {
        j=i;
        do
        {
            printf(" %d",j);
            j++;
        }while(j<=5);
        printf("\n");
        i--;
    }while(i>=1); */


    // 12.
/*    int i,j;
    i='E';
    while(i>='A')
    {
        j=i;
        while(j<='E')
        {
            printf(" %c",j);
            j++;
        }
        printf("\n");
        i--;
    }

    i='E';
    do
    {
        j=i;
        do
        {
            printf(" %c",j);
            j++;
        }while(j<='E');
        printf("\n");
        i--;
    }while(i>='A');*/


    // 11.
  /*  int i,j,a=2;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf(" %d",(a++)%2==0); // aa code ma even number ni jagayaye 0 lav vanu se
            j++;
        }
        printf("\n");
        i++;
    }

    i=1;
    a=2;
    do
    {
        j=1;
        do
        {
            printf(" %d",(a++)%2==0);
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5); */
    
    
    //4.
  /*  int i,j,a;
    printf("Enter your number  : ");
    scanf("%d",&a);
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf(" %d",a);
            a++;
            j++;
        }
        printf("\n");
        i++;
    }

    i=1;
    do
    {
        j=1;
        do
        {
            printf(" %d",a);
            a++;
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5); */


    //9.
   /* char i,j,a;
    printf("Enter your char : ");
    scanf(" %c",&a);
    i='A';
    while(i<='E')
    {
        j='A';
        while(j<=i)
        {
            printf(" %c",a);
            a++;
            j++;
        }
        printf("\n");
        i++; 
    }

    i='A';
    do
    {
        j='A';
        do
        {
            printf(" %c",a);
            a++;
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<='E'); */


    // 7.  &   8.
 /*   int i,j;
    char a;
    printf("Enter your char : ");
    scanf("%c",&a);
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
           // if(i==1 || i==3 || i==5)      // jo 7 mo hoi to 1  if and 8 mo hoi to 2 if jovu
           if(j==1 || j==3 || j==5)
            {
                printf(" %c",a);
            }
            else 
            {
                printf(" %c",a+32);
            }
            a++;
            j++;
        }
        printf("\n");
        i++;
    }

    i=1;
    do
    {
        j=1;
        do
        {
           // if(i==1 || i==5 ||i==3)               // jo 7 mo hoi to 1  if and 8 mo hoi to 2 if jovu
            if(j==1 || j==3 || j==5)
            {
                printf(" %c",a);
            }
            else 
            {
                printf(" %c",a+32);
            }
            a++;
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5); */


    // 5.
    int i,j;
    i=5;
    while(i>=1)
    {
        j=5;
        while(j>=i)
        {
            printf(" %d",j);
            j--;
        }
        printf("\n");
        i--;
    }

    i=5;
    do
    {
        j=5;
        do
        {
            printf(" %d",j);
            j--;
        }while(j>=i);
        printf("\n");
        i--;
    }while(i>=1);

}