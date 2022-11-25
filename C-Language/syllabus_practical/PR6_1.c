#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char pass[20];
    printf("Enter your password : ");
    scanf("%s",pass);
    int len = strlen(pass);
    int a=0,b=0,c=0,d=0;
    int i=0;
    do
    {
        if(islower(pass[i]))
        {
            a=1;
        }
        else if(isupper(pass[i]))
        {
            b=2;
        }
        else if(isdigit(pass[i]))
        {
            c=3;
        }
        else if(ispunct(pass[i]))
        {
            d=4;
        }
        i++;
    } while (i<len);
    if(a!=0 && b!=0 && c!=0 && d!=0)
    {
        printf("\nYour password is correct.");
    }
    if(a==0)
    {
        printf("\nYou have to write atleast one lower char in password");
    }
    if(b==0)
    {
        printf("\nyou have to write atleast one upeer char in password");
    }
    if(c==0)
    {
        printf("\nYou have to write atleast one digit in password");
    }
    if(d==0)
    {
        printf("\nYou have to write atleast one special char in password");
    }
    
}