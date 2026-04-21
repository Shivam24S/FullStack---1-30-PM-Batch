

#include <stdio.h>

int main()
{

    // int 4 bytes

    int num = 24;

    printf("\nsize of int value %d", sizeof(num));

    // float 4 bytes

    float decimalValue = 10.20;

    printf("\nsize  of float value %d", sizeof(decimalValue));

    // character 1 bytes

    char letter = 'a';

    printf("\nsize of character value %d", sizeof(letter));

    // double 8 bytes

    double value = 50;

    printf("\nsize of double value %d", sizeof(value));

    return 0;
}