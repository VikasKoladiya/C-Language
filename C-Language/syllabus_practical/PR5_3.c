#include <stdio.h>
void main()
{
    int r, s, a;
    printf("enter the age of ram,shyam and ajay:\n");
    scanf("%d%d%d", &r, &s, &a);
    if (r == s && s == a)
    {
        printf("all are of equal age");
    }

    else if (r == s)
    {
        printf("ram and shyam are of equal age");
    }

    else if (s == a)
    {
        printf("shyam and ajay are of equal age");
    }

    else if (a == r)
    {
        printf("ram and ajay are of equal age");
    }

    else if (r < s && r < a)
    {
        printf("ram is youngest");
    }
    else if (s < a)
    {
        printf("shyam is youngest");
    }
    else
    {
        printf("ajay is youngest");
        }
}