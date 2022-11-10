#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int a,b;
    printf("the sum of 1 and 2 is %d",sum(1,2));
    int (*ptr) (int ,int);
    ptr=&sum; // this is hold the address of sum function
    int d = (*ptr)(4,5); // ahiya(*ptr etle sum j thai etle aa ek rite uper ni jevu j kam kare etle ano meand am j thai ke sum(4,5) khali sum nu address store kari ley)
    printf("\nthe sum of 4 and 5 is %d",d);

}