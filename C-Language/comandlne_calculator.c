#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]) // argument hamesha string return kare
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    if (strcmp(operation, "add") == 0)
    {
        printf("additon of two numbwe is : %d", num1 + num2);
    }
    else if (strcmp(operation, "subs") == 0)
    {
        printf("additon of two numbwe is : %d", num1 - num2);
    }
    else if (strcmp(operation, "multi") == 0)
    {
        printf("additon of two numbwe is : %d", num1 * num2);
    }
    else if (strcmp(operation, "divi") == 0)
    {
        printf("additon of two numbwe is : %d", num1 / num2);
    }
    return 0;
}
