#include <stdio.h>
#include <string.h>
void main()
{
    char s1[5][15], temp[15];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Enter student name : ", i);
        gets(s1[i]);
    }
    for (i = 0; i < 5; i++)
    {

        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(s1[i], s1[j]) > 0)
            {
                strcpy(temp, s1[i]);
                strcpy(s1[i], s1[j]);
                strcpy(s1[j], temp);
            }
        }
        puts(s1[i]);
    }
}