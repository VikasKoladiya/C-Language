#include<stdio.h>
#include<conio.h>
#include<string.h>
// STRUCT USING ARRAY
// STUDENT INFORMATION
/*struct student
{
    int rollno,m1,m2,m3,total;
    char name[100];
    float per;
};struct student st[5];
void main()
{
    int i;
    char gr;
    printf("Enter 5 student list\n");
    for(i=0;i<=2;i++)
    {
        printf("Enter rollno : ");
        scanf("%d",&st[i].rollno);
        printf("Enter name : ");
        scanf("%s",&st[i].name);
        printf("Enter phy. : ");
        scanf("%d",&st[i].m1);
        printf("Enter chem. : ");
        scanf("%d",&st[i].m2);
        printf("Enter maths : ");
        scanf("%d",&st[i].m3);
        printf("\n\n");

    }
    printf("student information list\n");
    for(i=0;i<=2;i++)
    {
        st[i].total=st[i].m1+st[i].m2+st[i].m3;
        st[i].per=st[i].total/3;
        if(st[i].per>90)
        {
            gr='A';
        }
        else if(st[i].per<90 && st[i].per>=80)
        {
            gr='B';
        }
         else if(st[i].per<80 && st[i].per>=70)
        {
            gr='C';
        }
         else if(st[i].per<70 && st[i].per>=60)
        {
            gr='D';
        }
         else if(st[i].per<60 && st[i].per>=50)
        {
            gr='E';
        }
        else
        {
            gr='F';
        }
        printf("\nrollno : %d\nname : %s\nphy. : %d\nchem : %d\nmaths : %d\ntota : %d\nper : %f\ngread : %c",st[i].rollno,st[i].name,st[i].m1,st[i].m2,st[i].m3,st[i].total,st[i].per,gr);
        printf("\n\n");

    }
}*/


// STRUCT WITHOUT ARAAY
/*struct student
{
    int rollno,m1,m2,m3,total;
    char name[100];
    float per;
};
void main()
{
    int i;
    char gr;
    struct student st();
    printf("Enter 5 student list\n");
    for(i=0;i<=2;i++)
    {
        printf("Enter rollno : ");
        scanf("%d",&rollno);
        printf("Enter name : ");
        scanf("%s",&name);
        printf("Enter phy. : ");
        scanf("%d",&st[i].m1);
        printf("Enter chem. : ");
        scanf("%d",&st[i].m2);
        printf("Enter maths : ");
        scanf("%d",&st[i].m3);
        printf("\n\n");

    }
    printf("student information list\n");
    for(i=0;i<=2;i++)
    {
        st[i].total=st[i].m1+st[i].m2+st[i].m3;
        st[i].per=st[i].total/3;
        if(st[i].per>90)
        {
            gr='A';
        }
        else if(st[i].per<90 && st[i].per>=80)
        {
            gr='B';
        }
         else if(st[i].per<80 && st[i].per>=70)
        {
            gr='C';
        }
         else if(st[i].per<70 && st[i].per>=60)
        {
            gr='D';
        }
         else if(st[i].per<60 && st[i].per>=50)
        {
            gr='E';
        }
        else
        {
            gr='F';
        }
        printf("\nrollno : %d\nname : %s\nphy. : %d\nchem : %d\nmaths : %d\ntota : %d\nper : %f\ngread : %c",st[i].rollno,st[i].name,st[i].m1,st[i].m2,st[i].m3,st[i].total,st[i].per,gr);
        printf("\n\n");

    }
}*/


// SALARY USING STRUCT
/*struct employee 
{
    int basic,id;
    float hra,da,gs;
    char name[100];
};
void main()
{ 
    int n,i;
    struct employee em[5]; 
    printf("Enter employ player list : ");
    scanf("%d",&n);
    printf("this is %d employee list\n",n);
    for(i=1;i<=n;i++)
    {
        printf("Enter emploee id : ");
        scanf("%d",&em[i].id);
        printf("Enter employee name : ");
        scanf("%s",&em[i].name);
        printf("Enter basic salary of  employee : ");
        scanf("%d",&em[i].basic);
    }
    for(i=1;i<=n;i++)
    {
        if(em[i].basic<=5000)
        {
            em[i].hra=em[i].basic*0.08;
            em[i].da=em[i].basic*0.2;
            em[i].gs=em[i].basic+em[i].hra+em[i].da;
        }
        else if(em[i].basic>5000 && em[i].basic<=10000) 
        {
            em[i].hra=em[i].basic*0.12;
            em[i].da=em[i].basic*0.3;
            em[i].gs=em[i].basic+em[i].hra+em[i].da;
        }
        else if(em[i].basic>10000 && em[i].basic<=15000) 
        {
            em[i].hra=em[i].basic*0.15;
            em[i].da=em[i].basic*0.4;
            em[i].gs=em[i].basic+em[i].hra+em[i].da;
        }
        else if(em[i].basic>15000) 
        {
            em[i].hra=em[i].basic*0.2;
            em[i].da=em[i].basic*0.5;
            em[i].gs=em[i].basic+em[i].hra+em[i].da;
        }
        printf("\nemployee id : %d\nemployee name : %s\nemployee basic salary : %d\nhra of employee : %0.2f\nda of employee : %0.2f\ngross salary of employee : %0.2f\n",em[i].id,em[i].name,em[i].basic,em[i].hra,em[i].da,em[i].gs);
    }
}*/
