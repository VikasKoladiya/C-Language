#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str1[100],str[100];
    fp=fopen("append.txt","a+");
    if(fp==NULL)
    {
        printf("error..");
        exit(1);
    }
    while (!feof(fp))
    {  
        fgets(str1,15,fp);
        printf("%s\n",str1);
    }
    printf("Enter string : ");   
    gets(str);
    fputs(str,fp);
    
    fclose(fp);
}