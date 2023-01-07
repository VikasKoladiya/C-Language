#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char ch[10],ch1;
    int len=0;
    printf("\t\t22DCE044\n");
    fp=fopen("demo.txt","a+");
    if(fp==NULL)
    {
        printf("Error...");
        exit(1);
    }
    fseek(fp,1,SEEK_END);
    len=ftell(fp);
    rewind(fp);
    fgets(ch,len,fp);
    printf("string in file : %s",ch);
    strrev(ch);
    printf("\nreverse string is : %s",ch);
    rewind(fp);
    fprintf(fp,"%s",ch);
    fclose(fp);
}