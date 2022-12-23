#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char pass[20];
    printf("\t\t22DCE044\n");
    printf("Enter your password : ");
    scanf("%s",pass);
    int len = strlen(pass);
    int a=0,b=0,c=0,d=0;
    int i=0;
    if(len==8)
    {
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
            else if(ispunct(pass[i]) || pass[i]=='#')
            {
                d=4;
            }
            i++;
        } while (i<len);
        if(a!=0 && b!=0 && c!=0 && d!=0)
        {
            printf("\nYour pass is strong.");
        }
        else if( b==0 && a!=0 && c!=0 && d!=0)
        {
            printf("\nYour pass is Average.");
        }
        else
        {
            printf("\nYour pass is poor");
        }
    }
    else
    {
        printf("\nYou have enter large password.");
    }
    
}

