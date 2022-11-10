#include <stdio.h>

#include<stdlib.h>

int main()

{

    int i, j, n;

    system("COLOR E");

    printf("Enter the Size of Heart:  ");

    scanf("%d", &n);

    printf("\n");

    for(i=n/2; i<=n; i+=2)

    {

    	printf("\t\t\t");

        for(j=1; j<n-i; j+=2)

        {

            printf(" ");

        }



        for(j=1; j<=i; j++)

        {

        	system("COLOR C");

            printf("*");

        }

        printf("Love");

        for(j=1; j<=n-i; j++)

        {   

             system("COLOR F");

            printf(" ");

        }

         printf("You");

        for(j=1; j<=i; j++)

        {

             system("COLOR A");

            printf("*");

        }



        printf("\n");

    }

   

    for(i=n; i>=1; i--)

    {

    	printf("\t\t\t");

        for(j=i; j<n; j++)

        {

        	system("COLOR C ");

            printf(" ");

        }

         printf("You");

        for(j=1; j<=(i*2)-1; j++)

        {

        	system("COLOR B");

            printf("*");

        }

         	printf("Love");

        printf("\n");

    }

 printf("\t\t\t");

 system("COLOR E ");

     printf("Code Created By vikas koladiya");

     

    return 0;

}