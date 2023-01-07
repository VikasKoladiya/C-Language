#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    int i,a;
    printf("\t\t22DCE044\n");
    fp=fopen("write.txt","w");
    if(fp==NULL)
    {
        printf("Error...");
        exit(1);
    }
    for(int i=1;i<=10;i++)
    {
        putw(i,fp);
    }
    fclose(fp);
    fp=fopen("write.txt","r");
    for(int i=1;i<=10;i++)
    {
        a=getw(fp);     // getw and putw is unreadable but other file function are readable.
        printf("%d ",a);
    }
    fclose(fp);
}