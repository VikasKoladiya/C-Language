#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// if your file is not exit write and append mode are creat a new file automatically
// but read mode and r+ mode dont creat new file
void main()
{
    FILE *fp;
    char ch='V';    //if you want to take input you can also take form user
    char name[20];   //char name[20]="Vikas koladiya"; you can also write through this method and same as all 
                    // data type
    int d=20;
    float c=9.78;
    fp=fopen("write.txt","w");      // here you also write path of file
    if(fp==NULL)
    {
        printf("File does't exits..");
        exit(1);
    }
    //  fputc(ch,fp);      // fputc(_,*); here _ is replaced by any variable which type is only char and * is pointer
    //  fputs(name,fp);   // fputs(_,*); here _ is replaced by any variable which type is only char and it must be string and * is pointer
    

    printf("Enter string : ");
    gets(name);
    // fprintf(fp,"%c\n%s\n%d\n%f",ch,name,d,c);
    /* one more method to weite down string*/
    for(int i=0;i!=strlen(name);i++)
    {
        fputc(name[i],fp);
    }

    // here fprintf(*,"%d",_) // here * is pointer and then you should write formate specifier and its variable name
    // fprintf takes any type like int,float,char etc. and putc and puts is takes only char type.

    fclose(fp);
}