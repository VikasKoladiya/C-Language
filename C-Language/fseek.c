#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("demo.txt","r+");
    if(fp==NULL)
    {
        printf("error...");
        exit(1);
    }
    fseek(fp,5,SEEK_SET);
    ch=fgetc(fp);       // here i is n-1th character n is 6 because its index start from 6
    printf("%c\n",ch);   //v

    fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);       
    printf("%c\n",ch);    //m

    fseek(fp,-3,SEEK_END);
    ch=fgetc(fp);
    printf("%c\n",ch);   //a
  
    fseek(fp,0,SEEK_CUR);
    ch=fgetc(fp);
    printf("%c\n",ch);     //a
    fclose(fp);
}