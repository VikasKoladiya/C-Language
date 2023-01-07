#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("\t\t22DCE044\n");
    char *ptr;
    ptr=(char *)calloc(20,sizeof(char));
    printf("Enter string : ");
    gets(ptr);
    printf("string is : ");
    puts(ptr);
    ptr=realloc(ptr,50);
    printf("Enter string : ");
    gets(ptr);
    printf("string is : ");
    puts(ptr);
    free(ptr);
}