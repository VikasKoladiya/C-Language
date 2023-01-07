#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,ch=1;
    while(ch)
    {
        printf("\nmeory leak : ");
        ptr=(int *)malloc(50000*sizeof(int));
        printf("\npress 1 for continue : ");
        scanf("%d",&ch);
        free(ptr);
    }
}
// when we show mwmory leak that time we need to open tske manager.