#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    // when you enter scissor your game will be over.
    int com;
    char your;
    srand(time(NULL));
    printf("you can press r for rock : \n");
    printf("you can press p for paper : \n");
    printf("you can press s dor scissor : \n");
    while(1)
    {
       
        com = rand()%3;
        printf("\nyour turn : ");
        scanf("%c",&your);
        fflush(stdin);
        if(your=='r' || your=='p' || your=='s' || your=='R' || your=='P' || your=='S')
        {
            if((your=='r' || your=='R') && com==1)
            {
                printf("\ncomputer select paper and you have select rock");
                printf("\nyou lose this turn.");
            }
            
            if((your=='r' || your=='R') && com==2)
            {
                printf("\ncomputer select scissor and you have select rock");
                printf("\nyou won this turn.");
            }

            
            if((your=='r' || your=='R') && com==0)
            {
                printf("\ncomputer select rock and you have select rock");
                printf("\nthis turn is tie...continue....");
            }

            
            if((your=='p' || your=='P') && com==0)
            {
                printf("\ncomputer select rock and you have select paper");
                printf("\nyou won this turn.");
            }
            
            if((your=='p' || your=='P') && com==1)
            {
                printf("\ncomputer select paper and you have select paper");
                printf("\nthis turn is tie...continue...");
            }
            
            if((your=='p' || your=='P') && com==2)
            {
                printf("\ncomputer select scissor and you have select paper");
                printf("\nyou lose this turn.");
            }
            
            if(your=='s' || your=='S')
            {
                printf("\nyou have select scissor so game is over!!!");
                break;
            }
        }
        else
        {
            printf("\nYou have select wrong option!!\n");
        }
    }
}
