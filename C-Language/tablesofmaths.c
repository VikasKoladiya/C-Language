#include<stdio.h>
void main()
{
/*  int a,z1,z2,z3,z4,z5,z6,z7,z8,z9,z10;
  printf("ENTER THE NUMBER YOU MULTIPTLICATION TABLE OF\n");
  scanf("%d",&a);
  z1=a*1;
  z2=a*2;
  z3=a*3;
  z4=a*4;
  z5=a*5;
  z6=a*6;
  z7=a*7;
  z8=a*8;
  z9=a*9;
  z10=a*10;
  printf( "%d X 1 = %d",a,z1);
  printf( "\n%d X 2 = %d",a,z2);
  printf( "\n%d X 3 = %d",a,z3);
  printf( "\n%d X 4 = %d",a,z4);
  printf( "\n%d X 5 = %d",a,z5);
  printf( "\n%d X 6 = %d",a,z6);
  printf( "\n%d X 7 = %d",a,z7);
  printf( "\n%d X 8 = %d",a,z8);
  printf( "\n%d X 9 = %d",a,z9);
  printf( "\n%d X 10 = %d",a,z10);

  // aa table game te (.)point vala number mate pan lagu pade

  float b,z11,z12,z13,z14,z15,z16,z17,z18,z19,z20;
  printf("\nENTER THE NUMBER YOU MULTIPTLICATION TABLE OF MATHS\n");
  scanf("%f",&b);
  z11=b*1;
  z12=b*2;
  z13=b*3;
  z14=b*4;
  z15=b*5;
  z16=b*6;
  z17=b*7;
  z18=b*8;
  z19=b*9;
  z20=b*10;
  printf( "%f X 1 = %f",b,z11);
  printf( "\n%f X 2 = %f",b,z12);
  printf( "\n%f X 3 = %f",b,z13);
  printf( "\n%f X 4 = %f",b,z14);
  printf( "\n%f X 5 = %f",b,z15);
  printf( "\n%f X 6 = %f",b,z16);
  printf( "\n%f X 7 = %f",b,z17);
  printf( "\n%f X 8 = %f",b,z18);
  printf( "\n%f X 9 = %f",b,z19);
  printf( "\n%f X 10 = %f",b,z20);
  return 0;*/


  // maths table using by for loop
  int a,b,c,i;
  printf("\n Enter your number : ");
  scanf("%d",&a);
  for(i=1;i<=10;i++)
  {
    b=a*i;
    printf("\n %d X %d : %d",a,i,b);
  }
}
