#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    /*
    // singel peramiter function
    char str1[100],len;
    printf("Enter string 1 : ");
    gets(str1);
    
    // length function
    len=strlen(str1);
    printf("string 1 : %s\n",str1);
    printf("\nLength : %d",len);

    // string revers function
    strrev(str1);
    printf("\n string1 revers : %s",str1);

    // string upper case fuction
    strupr(str1);
    printf("\n string1 upper : %s",str1);

    // string lower case function
    strlwr(str1);
    printf("\n string1 lower : %s",str1);
    getch();
    */


   // two paramwtr string dunction
   char str1[100],str2[100];
   printf("Enter string1 : ");
   gets(str1);

   printf("Enter string2 : ");
   gets(str2);

   // string's cpoy function
   // strcpy(str2,str1);

   // string's concet(it means add string) function
   // strcat(str2,str1);

    printf(" \n str1 : %s",str1);
    printf(" \n str2 : %s",str2);

    // string's compar function
    // this is case sensitive
    printf("\n strcamp : %d",strcmp(str1,str2));

    // this is note case sensitive
    printf("\n strcampi : %d",strcmpi(str1,str2));
}