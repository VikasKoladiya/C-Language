#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str1[100],str[100];
    fp=fopen("write.txt","w+");
    if(fp==NULL)
    {
        printf("error..");
        exit(1);
    }
    // rewind means cursor are going on starting position
    printf("Enter string : ");   
    gets(str);
    fputs(str,fp);
    rewind(fp);   
    fgets(str1,15,fp);
    printf("%s\n",str1);
      
    
    fclose(fp);
}