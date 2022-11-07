#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main()
{
	float l=50,g1=9.8,g2=0,g3,g4,t1,t2,t3,t4;
	clrscr();
	g3=(0.9993*g1);
	g4= (-1)*g1;
	printf("\n\n\tID : 22TDE033");
	printf("\n\nThe Length is %.2f",l);
	printf("\n\nGravity-1 is %.1f",g1);
	t1=2*pi*sqrt(l/g1);
	printf("\nThen time-1 is %.1f",t1);
	printf("\n\nGravity-2 is %.1f",g2);
	t2=2*pi*sqrt(l/g2);
	printf("\nThen time-2 is %.1f",t2);
	printf("\n\nGravity-3 is %.1f",g3);
	t3=2*pi*sqrt(l/g3);
	printf("\nThen time-3 is %.1f",t3);
	printf("\n\nGravity-4 is %.1f",g4);
	t4=2*pi*sqrt(l/g4);
	printf("then time-4 is %.1f",t4);
	getch();
}
    
    