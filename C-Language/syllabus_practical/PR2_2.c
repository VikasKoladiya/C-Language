#include<stdio.h>
#include<conio.h>

int main()
{

int a=100,b=50,c=10,ra,na,nb,nc,t;
clrscr();

printf("\nEnter Amount: ");
scanf("%d",&t);
na=t/a;
printf("\nNumber of 100Rs notes = %d",na);
ra=t%a;
nb=ra/b;
printf("\nNumber of 50Rs notes = %d",nb);
ra=ra%b;
nc=ra/c;
printf("\nNumber of 10Rs notes = %d",nc);
printf("\n\tID : 22TDCE033");
getch();
}
