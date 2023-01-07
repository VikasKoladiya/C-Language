#include<stdio.h>
struct employee
{
    int age;
    char name[30];
    int salary;
    struct address
    {
       int h_no;
       int pincode;     
    }add;
}e;
void main()
{
    printf("\t\t22DCE044\n");
    printf("Enter age of employee : ");
    scanf("%d",&e.age);
    fflush(stdin);
    printf("Enter employee name : ");
    gets(e.name);
    printf("Enter salary of employee : ");
    scanf("%d",&e.salary);
    printf("Enter house number of employee : ");
    scanf("%d",&e.add.h_no);
    printf("Enter picode : ");
    scanf("%d",&e.add.pincode);
    
    // printing part
    printf("Age of employee is : %d",e.age);
    printf("\nName of employee is : %s",e.name);
    printf("\nSalary of employee is : %d",e.salary);
    printf("\nHouse number is : %d",e.add.h_no);
    printf("\nPincode is : %d",e.add.pincode);
}