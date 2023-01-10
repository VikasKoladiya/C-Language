#include<stdio.h>
#include<conio.h>
void main()
{
    // 3. qestion of c-if
    // int basic,hra,da,z,a;
 /* printf("\nEnter your basic salary : ");
    scanf("%d",&basic);
    if(basic<5000)
    {
            basic=basic; 
            hra=basic*8/100; 
            da=basic*0.2;
            a=basic+hra+da;
            printf("\nbasic=%d  hra=%d  da=%d",basic,hra,da);
            printf("\n your total salary is %d",a);
    }
    else if(basic>=5000 && basic<10000)
    {
            basic=basic;
            hra=basic*12/100;
            da=basic*0.3;
            a=basic+hra+da;
            printf("\nbasic=%d  hra=%d  da=%d",basic,hra,da);
            printf("\n your total salary is %d",a);
    }
    else if(basic>=10000 && basic<15000)
    {
            basic=basic;
            hra=basic*15/100;
            da=basic*0.4;
            a=basic+hra+da;
            printf("\nbasic=%d  hra=%d  da=%d",basic,hra,da);
            printf("\n your total salary is %d",a);
    }
    else if(basic>=15000)
    {
            basic=basic;
            hra=basic*20/100;
            da=basic*0.5;
            a=basic+hra+da;
            printf("\nbasic=%d  hra=%d  da=%d",basic,hra,da);
            printf("\n your total salary is %d",a);
    }*/



    // 1. qestion of if-c
   /* int unit,b,c,d;
    printf("\n Enter your unit : ");
    scanf("%d",&unit);
    if(unit<100)
    {
        c=unit*0.6+50;
        printf("\n your unit = %d , tax=%d",unit,c);
    }
    else if(unit>100 && unit<300)
    {
        c=(100*0.6)+(unit-100)*0.8+50;
        printf("\n your unit = %d , tax=%d",unit,c); 
    }
    else if(unit>300)
    {
        c=(100*0.6)+(200*0.8)+(unit-300)*0.9+50;
        printf("\n your unit = %d , tax=%d",unit,c);
    }
    if(c>300)
    {
        b=c*0.15;
        d=b+c;
        printf("\n your total tax is %d",d);
    } */
    

    // 4. qestion of c-if
        int slab,tax;
        printf("\nEnter your salary : ");
        scanf("%d",&slab);
        if(slab<2500)
        {
            tax=slab*0.0;
            printf("\n slab=%d tax=%d",slab,tax);
        }
        else if(slab>=2500 && slab<5000)
        {
            tax=(slab*0.0)+(slab-2500)*0.1;
            printf("\n slab=%d tax=%d",slab,tax);
        }
        else if(slab>=5000 && slab<10000)
        {
            tax=(2500*0.1)+(slab-5000)*0.2;
            printf("\n slab=%d tax=%d",slab,tax);
        }
        else if(slab>=10000)
        {
            tax=(2500*0.1)+(5000*0.2)+(slab-10000)*0.3;
            printf("\n slab=%d tax=%d",slab,tax);
        }
    
}