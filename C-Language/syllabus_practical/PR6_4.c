#include <stdio.h>
int main()
{
    int sticks=21,pick,cp;
    for(int i=sticks;i>0;i=i-pick)
    {
        printf("\n\nEnter your pick(1,2,3,4) : ");
        scanf("%d",&pick);
    if((pick>sticks)||(pick>4))
    {
        printf("wrong input");
        break;
    }
        if((sticks==1)&&(pick==1))
        {
            printf("Computer won");
            printf("\n\tID : 22DCS007\n");
            printf("\tNAME : Bhammar vipul\n");
            break;
        }
        cp=5-pick;
        printf("\nComputer's pick : %d",cp);
        sticks=sticks-pick-cp;
        printf("\nRemaining sticks : %d",sticks);

    }
    return 0;
}