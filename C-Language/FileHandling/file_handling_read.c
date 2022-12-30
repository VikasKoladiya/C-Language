#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char str[100];
    fp=fopen("read.txt","r");
    if(fp==NULL)
    {
        printf("File dont exits...");
        exit(1);
    }

    // ch=fgetc(fp);    
    // printf("%c",ch);      
    //fgetc(_) _is replace by pointer to point file and it read only one charachter from file
    // if you want to all charachter using fgetc you must be put in loop
    // and loop run till end of file feop(fp) if any character are avilabe this function return 0 otherwise it retrurn 1
    // let me show you that think

    // while(!feof(fp))  
    // {
    //     ch=fgetc(fp);
    //     printf("%c",ch);
    // }
    // here ! is mandatory because if any charcater avilabe in loop it will 
    //return 0 so loop false so loop not iterat any time 


    //string
    // if your file have only one line so you can write this method
    // fgets(str,8,fp);    // fgets(_,num,*) _is replaced by string indicated variable name
    //                     // num is replaed by apde jetla character or number jota hoi eni snkhaya
    //                     // * is replaed by FILE pointer
    // printf("%s",str); 


    // if your file have more than one line so you can write this method
    // here you just put this statement in loop
    while(!feof(fp))
    {
        fgets(str,8,fp);
        printf("%s",str);
    }
    fclose(fp);
    // when you get any char cursormove forward one step
}