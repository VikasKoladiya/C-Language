#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float r1, r2, d;
    printf("enter a,b,c :");
    scanf("\n %d,%d,%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    printf("value of d : %f\n", d);
    switch (d > 0)
    {
    case 1:
    {
        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("first root : %f\n", r1);
        printf("second root : %f", r2);
        break;
    }
    case 0:
    {
        switch (d < 0)
        {
        case 1:
        {
            r1 = -b / 2 * a;
            r2 = sqrt(-d) / 2 * a;
            printf("real roots  is : %f\n", r1);
            printf("imagnary roots  is : %f\n", r2);
            printf("%f + %fi\n", r1, r2);
            break;
        }
        case 0:
        {
            r1 = -b / 2 * a;
            printf("both roots are same is : %f ,%f", r1, r1);
        }
        }
    }
    }
}
/*

// qudratic without switch case

/*#include <stdio.h>
//#include <conio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float d, r1, r2, d1;
    printf("enter value of a,b,c");
    scanf("\n%d,%d,%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    printf("%f", d);

    if (d == 0.0f)
    {
        r1 = r2 = -b / 2 * a;
        printf("\n%f", r2);
    }
    else if (d < 0.0f)
    {
        r1 = -b / 2 * a;       // vastavi
        r2 = sqrt(-d) / 2 * a; // kalpanik
        printf("\n%.2f + %.2fi", r1, r2);
    }
    else if (d1 > 0.0f)
    {
        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("\n%f\n%f", r1, r2);
    }
}*/