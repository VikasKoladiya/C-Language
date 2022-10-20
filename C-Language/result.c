#include<stdio.h>
#include<conio.h>
void main()
{
    // 5.qestion of c-if
    int chem,phy,maths,com,eng,t,z;
    printf("THIS IS RESULT OF 12th SCIENCE\n");
    printf("\nEnter your chem marks : ");
    scanf("%d",&chem);
    printf("\nEnter your phy marks : ");
    scanf("%d",&phy);
    printf("\nEnter your maths marks : ");
    scanf("%d",&maths);
    printf("\nEnter your com marks : ");
    scanf("%d",&com);
    printf("\nEnter your eng marks : ");
    scanf("%d",&eng);
    t=chem+phy+maths+com+eng;
    z=t/5;
    printf("\nyour persntag is : %d",z);
    if(z>90)
    {
        printf("\ncongretulation");
        printf("\nyou are passed with A1 gread");
    }
    else if(z>80 && z<90)
    {
        printf("\nyou are passed with A2 gread");
    }
    else if(z>70 && z<80)
    {
        printf("\nyou have passed with B1 gread");
    }
    else if(z>60 && z<70)
    {
        printf("\nyou have passed with B2 gread");
    }
    else if(z>50 && z<60)
    {
        printf("\nyou have passed with C1 gread");
    }
    else
    {
        printf("\nSORRY !!");
        printf("\nYOU HAVE FAILED");
        printf("\nBETTER LUCK NEXT TIME");
    }
    if(chem<40)
    {
        printf("\nyou have failed in chem");
    }
    if(phy<40)
    {
        printf("\nyou have failed in phy");
    }    
    if(maths<40)
    {
        printf("\nyou have failed in maths");
    }
    if(com<40)
    {
        printf("\nyou have failed in com");
    }
    if(eng<40)
    {
        printf("\nyou have failed in eng");
    }

}