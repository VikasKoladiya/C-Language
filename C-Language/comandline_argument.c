#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("the value of argument is %d",argc);
    for(i=0;i<argc;i++)
    {
        printf("\nthe value of index %d and string is %s\n",i,argv[i]);
    }
    return 0;
}
