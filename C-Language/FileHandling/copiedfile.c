#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL,*fp1=NULL;
    char ch;
    fp=fopen("demo.txt","r");
    if(fp==NULL)
    {
        printf("error in file1");
        exit(1);
    }
    fp1=fopen("copied.txt","w");
    if(fp1==NULL)
    {
        printf("Error in file2");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,fp1);
    }
    printf("Successfully copied...");
    fclose(fp);
}