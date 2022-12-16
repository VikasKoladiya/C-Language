#include <stdio.h>
void main()
{
    int stick = 21, pick, cp;
    printf("\t\t22DCE044\n");
    while (stick > 0)
    {
        printf("\nEnter your pick(1,2,3,4) : ");
        scanf("%d", &pick);
        if ((pick > stick) || (pick > 4))
        {
            printf("wrong output");
            break;
        }
        if ((pick == 1) && (stick == 1))
        {
            printf("Computer won.");
            break;
        }
        cp = 5 - pick;
        printf("Computer pick : %d", cp);
        stick = stick - pick - cp;
        printf("\nRemaining stick : %d", stick);
    }
}