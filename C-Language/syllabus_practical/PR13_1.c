#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[100];
    int age;
    int class;
    char branch[5];
};
void main()
{
    struct student *s;
    int n,i;
    printf("\t\t22DCE044\n");
    printf("Enter number of student : ");
    scanf("%d",&n);
    int len[n];
    s=(struct student *)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("Enter roll no : ");
        scanf("%d",&(s+i)->roll_no);
        fflush(stdin);
        printf("Enter name : ");
        gets((s+i)->name);
        printf("Enter age : ");
        scanf("%d",&(s+i)->age);
        printf("Enter calss : ");
        scanf("%d",&(s+i)->class);
        fflush(stdin);
        printf("Enter branch : ");
        gets((s+i)->branch);
        len[i]=strlen((s+i)->name);
    }
    printf("Information of student.");
    printf("\n------------------------------------------------------------\n");
    printf("Roolno\t\tName\t\tAge\t\tClass\t\tBranch\n");
    for(i=0;i<n;i++)
    {
        if(len[i]>=7)
        {
            printf("%d\t\t",(s+i)->roll_no);
            printf("%s\t",(s+i)->name);
            printf("%d\t\t",(s+i)->age);
            printf("%d\t\t",(s+i)->class);
            printf("%s\t\t",(s+i)->branch);
            printf("\n");
        }
        else
        {
            printf("%d\t\t",(s+i)->roll_no);
            printf("%s\t\t",(s+i)->name);
            printf("%d\t\t",(s+i)->age);
            printf("%d\t\t",(s+i)->class);
            printf("%s\t\t",(s+i)->branch);
            printf("\n");
        }
    }
    free(s);
}