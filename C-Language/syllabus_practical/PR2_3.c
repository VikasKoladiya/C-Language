#include<stdio.h>
#include<conio.h>
void main()
{
	float BS=5000,DA,HRA,MA,TA,PF,IT=500,GS,DE,NS,AL;
	clrscr();
	printf("\n\n\tID : 22TDCE033");
	printf("\n\nBasic salary is %.2f.\n",BS);
	DA=0.7*BS;
	HRA=0.07*BS;
	MA=0.02*BS;
	TA=0.04*BS;
	PF=0.12*BS;
	AL=DA+HRA+TA+MA;
	GS=BS+AL;
	DE=PF+IT;
	printf("\nAllowance detail :- \n");
	printf("\nda = %.2f\nhra = %.2f\nma = %.2f\nta = %.2f",DA,HRA,MA,TA);
	printf("\n\nDeduction detail :- \n");
	printf("\npf = %.2f\nit = %.2f\n",PF,IT);
	printf("\n\nGross salary is %.2f\n",BS+AL);
	printf("Net salary is %.2f",GS-DE);

	getch();
}
