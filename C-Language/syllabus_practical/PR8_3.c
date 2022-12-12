#include <stdio.h>
#include <string.h>
void main()
{
    char s1[20], s2[20];
    int i, j, l = 0, length;
    printf("ID:22DCE044\n\n");
    printf("Enter string 1:");
    gets(s1);
    length = strlen(s1);

    for (i = 0; s1[i] != '\0'; i++);
    i = i - 1;
    for (j = 0; i >= 0; j++, i--)
    {
        s2[j] = s1[i];
    }
    s2[j] = '\0';
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[i])
        {
            l++;
        }
    }
    if (length == l)
    {
        printf("String is palindrome..");
    }
    else
    {
        printf("String is not palindrome..");
    }
}