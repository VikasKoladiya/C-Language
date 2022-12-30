#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str1[100],str[100];
    fp=fopen("read.txt","r+");
    if(fp==NULL)
    {
        printf("error..");
        exit(1);
    }
    fgets(str1,15,fp);
    printf("%s\n",str1);
    rewind(fp);             // rewind means cursor are going on starting position
    printf("Enter string : ");   
    gets(str);
    fputs(str,fp);
    
    fclose(fp);
}