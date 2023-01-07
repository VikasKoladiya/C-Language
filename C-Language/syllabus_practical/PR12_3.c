#include<stdio.h>
void main()
{
    FILE *fp;
    char ch[20],a[20];
    printf("\t\t22DCE044\n");
    fp=fopen("Demo1.txt","w");
    for(int i=1;i<=5;i++)
    {
        putw(i,fp);
    }
    fclose(fp);

    fp=fopen("Demo2.txt","w");
    for(int i=5;i<=10;i++)
    {
        putw(i,fp);
    }
    fclose(fp);
    fp=fopen("Demo1.txt","r");
    for(int i=1;i<=5;i++)
    {
        ch[i]=getw(fp);
    }
    fclose(fp);
    fp=fopen("Demo2.txt","r");
    for(int i=5;i<=10;i++)
    {
        ch[i]=getw(fp);
    }
    fclose(fp);
    fp=fopen("Demo3.txt","w");
    for(int i=1;i<=10;i++)
    {
        putw(ch[i],fp);
    }
    fclose(fp);
    fp=fopen("Demo3.txt","r");
    for(int i=1;i<=10;i++)
    {
        a[i]=getw(fp);
        printf("%d ",a[i]); 
    }
    fclose(fp);
}