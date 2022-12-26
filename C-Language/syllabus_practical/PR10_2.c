#include<stdio.h>
union book
{
    char title[20];
    char author[20];
    float price;
    int flag;
    int accession;
}b;
void display(union book b)
{
    printf("Accession number is : %d",b.accession);
    printf("\nBook name is : %s",b.title);
    printf("\nAuthor name is : %s",b.author);
    printf("\nPrice of book is : %f",b.price);
    printf("\nYour choosed option is : %d",b.flag);  // here last input was displayed
    if(b.flag == 1)
    {
        printf("\nYour Book Issued...");
    }
    else if(b.flag == 0)
    {
        printf("\nYour Book not issued!!!");
    }
      
}
void main()
{
    printf("\t\t22DCE044\n");
    printf("Enter accession number : ");
    scanf("%d",&b.accession);
    fflush(stdin);
    printf("Enter book name : ");
    gets(b.title);
    printf("Enter Author name : ");
    gets(b.author);
    printf("Enter price of book : ");
    scanf("%f",&b.price);
    printf("Enter 0 or 1 : ");
    scanf("%d",&b.flag);
    display(b);
}
