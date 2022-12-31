#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    int size;
    char ch;
    fp=fopen("demo.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    // fseek(fp,0,SEEK_END);
    // size=ftell(fp);
    // printf("%d",size);

    fseek(fp,6,SEEK_SET);
    size=ftell(fp);
    printf("%d",size);
   
    fseek(fp,-17,SEEK_CUR);
    size=ftell(fp);
    printf("\n%d",size);
    fclose(fp);

}