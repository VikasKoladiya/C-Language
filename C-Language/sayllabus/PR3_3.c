#include<stdio.h>
#include<conio.h>

void main()


{ int yell,pink,cal;

 clrscr();
 yell=  10;
 pink=20;
 printf("\n\n\n  ID : 22TDCE033");
 printf("\n\nbefore execution : \n\tyellow = %d\n\tpink = %d",yell,pink);
 cal = ++yell + yell++ + --yell + ++pink - --pink - --pink;
 printf("\n\ncalculation : %d",cal);

 printf("\n\nafter execution : \n\tyellow = %d\n\tpink = %d",yell,pink);
 getch();
}
