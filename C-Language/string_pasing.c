#include<stdio.h>
#include<string.h>
void modify(char str1[],char str2[])
{
    int i,length=0;
    printf("length of first string : %d\n",strlen(str1));
    str2[2]='P';
    printf("print both string : %s %s",str1,str2);

}
void main()
{
    char str1[]="vikas";
    char str2[]="DEpSTAR";
    modify(str1,str2);
}