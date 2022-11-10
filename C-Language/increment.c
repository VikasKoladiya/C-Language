#include<stdio.h>
//#include<conio.h>
void main()
{
	int y=10,p=20,cal=0;
	//clrscr();
    //printf("\n\n%d",++y + y++ + --y + ++p - --p - --p);x
	cal=++y + y++ + --y + ++p - --p - --p;
	printf("%d",cal);
	printf("\n%d\t%d",y,p);
	

	//return 0;
}