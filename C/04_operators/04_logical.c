

#include <stdio.h>

int main()
{

    int a = 1;

    int b = 0;

    // logical operators

    // and && operator in this both condition must be true then and then only it works;

    printf("\nand operator result %d", a && b);

    // printf("\nand operator result %d", a && b);

    // or || operator in this any one condition must be true its is not necessary to both condition have to be true;

    printf("\n or operator result %d", a || b);

    // not ! operator

    printf("\n not operator a result %d", !a);
    printf("\n not operator b result %d", !b);

    return 0;
}