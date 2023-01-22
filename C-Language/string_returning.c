#include<stdio.h>
char* fun()
{
    char str[]="vikas";
    return str;
}
void main()
{
    char *str;
    str=fun();
    printf("str is : %s",str);
}
