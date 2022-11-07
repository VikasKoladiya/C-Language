#include<stdio.h>
#include <conio.h>

int main()
{
float t=80000.0,tl,tm,lm,ilm,tw,lw,ilw;
clrscr();
tl=0.48*t;
tm=0.52*t;
lm=tl*0.35;
tw=t-tm;
ilm=t-lm-tw;
lw=tl-lm;
ilw=t-tm-lw;
printf("\n\n\t\t\tID : 22TDCE033");
printf("\n\nTotal population = %.1f",t);
printf("\ntotal number of literate people = %.1f",tl);
printf("\ntotal number of men = %.1f",tm);
printf("\ntotal number of literate men = %.1f",lm);
printf("\ntotal number of illiterate men = %.1f",ilm);
printf("\ntotal number of women = %.1f",tw);
printf("\ntotal number of literate women = %.1f",lw);
printf("\ntotal number of iliterate women = %.1f",ilw);
getch();
}
