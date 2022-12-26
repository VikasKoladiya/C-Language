#include<stdio.h>
struct book
{
    char title[20];
    char author[20];
    float price;
}b;
void display(struct book b)
{
    printf("Book name is : %s",b.title);
    printf("\nAuthor name is : %s",b.author);
    printf("\nPrice of book is : %f",b.price);
}
void main()
{
    printf("\t\t22DCE044\n");
    printf("Enter book name : ");
    gets(b.title);
    printf("Enter Author name : ");
    gets(b.author);
    printf("Enter price of book : ");
    scanf("%f",&b.price);
    display(b);
}
