

#include <stdio.h>

int main()
{

    // assignment operator

    int num;

    num = 24;

    printf("\n number before any changes %d", num);

    // add and assign

    num = num + 24;

    printf("\nmanually num value changed %d", num);

    // printf("\n add and assign %d", num += 24);

    // -=

    // printf("\n substract and assign %d", num -= 24);

    // *=

    printf("\n multiplication and assign %d", num *= 2);

    // /=

    printf("\n division and assign %d", num /= 1);

    // %=

    printf("\n modulo and assign %d", num %= 1);

    return 0;
}