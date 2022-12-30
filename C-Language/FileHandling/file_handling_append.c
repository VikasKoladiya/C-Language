#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str[50];
    fp=fopen("append.txt","a");
    if(fp== NULL)
    {
        printf("This doesnt exist...");
        exit(1);
    }
    printf("Enter content : ");
    gets(str);
    fprintf(fp,"\n%s",str);  // fputs(str,fp);
    printf("successfully appended....");
    fclose(fp);
}