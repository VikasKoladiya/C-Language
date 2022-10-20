#include<stdio.h>
#include<conio.h>
void main()
{
// this program is find any character value
    /* char ch,a;
     printf("\n enter your ch : ");
     scanf("%c",&ch);
     printf(" %c : %d",ch,ch);*/
     // koi pan character ni value find karva mate %d lagad vama aave
     // A start from [65] and a star from [97] and difeeranc of any capital and small character are [32]

     // qestion 1
    /* char ch;
     printf("\n enter your ch : ");
     scanf("%c",&ch);
     printf(" %c : %d",ch,ch);
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     {
         printf("\n%c is vowel",ch);
     }
     else 
     {
         printf("\n%c is not vowel",ch);
     }*/


    // qestion 2
    char ch;
     printf("\n enter your ch : ");
     scanf("%c",&ch);
     if(ch>='a' && ch<='z')
     {
         printf("\n %c : %c",ch,ch-32);
     }
     else if (ch>='A' && ch<='Z')
     {
         printf("\n %c : %c",ch,ch+32);
     }
    
}