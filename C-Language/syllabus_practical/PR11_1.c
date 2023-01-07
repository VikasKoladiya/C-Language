#include<stdio.h>
void main()
{
    int a[10],fail=0,first=0,dist=0,pass=0;
    int *p;
    printf("\t\t22DCE044\n");
    for(int i=0;i<10;i++)
    {
        static int j=1;
        printf("Enter %dth student marks : ",j++);
        scanf("%d",&a[i]);
    }
    p=a;
    for(int i=0;i<10;i++)
    {
        if(*(p+i)<40)
        {
            fail++;
        }
        else if(*(p+i)<60)
        {
            pass++;
        }
        else if (*(p+i)<70)
        {
            first++;
        }
        else if (*(p+i)>70)
        {
            dist++;
        }  
    }
    printf("Number of distinction student : %d\n",dist);
    printf("Number of first student : %d\n",first);
    printf("Number of pass student : %d\n",pass);
    printf("Number of fail student : %d\n",fail);
}