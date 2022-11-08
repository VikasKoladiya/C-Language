#include<stdio.h>
void main()
{
    int notecount,amount,finalcount=0,i;
    int a[10];
    printf("Enter amount : ");
    scanf("%d",&amount);
    a[0]=2000;a[1]=500;a[2]=200;a[3]=100;a[4]=50;
    a[5]=20;a[6]=10;a[7]=5;a[8]=2;a[9]=1;
    for(i=0;i<10;i++)
    {
        notecount=amount/a[i];
        amount=amount%a[i];
        finalcount+=notecount;

        printf("\n %d note of %d",notecount,a[i]);
    }
    printf("\n final count of note is %d",finalcount);


}