

#include <stdio.h>

int main()
{

    // integer

    int num = 24;

    // float

    float decimalValue = 3.14;

    // char

    char character = 's';

    // string    // this can't be changed

    char *string = "this is my string";

    // this can be modifyble

    char anotherString[50] = "this is another string";

    anotherString[1] = 's';

    printf("\n%c", anotherString[1]);

    return 0;
}