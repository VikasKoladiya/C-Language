//1. (Pointers to Functions)
#include<stdio.h>

/*void display();
int main()
{
    void (*func_ptr)();
    func_ptr=display;
    printf("\t\t22DCE044\n");
    printf("Address of functions display is %u\n",func_ptr);
    (*func_ptr)();
    return 0;
}
void display()
{
    puts("By helping others, we help overselves!!");
}*/


//2. (Functions Returning Pointers)
char *copy (char*,char *);
int main()
{
    char *str;
    char source[] = "Kindness";
    char target[10];
    printf("\t\t22DCE044\n");
    str=copy(target,source);
    printf("%s\n",str);
    return 0;
}
char *copy(char *t,char *s)
{
    char * r;
    r = t;
    while(*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
    return(r);
}
