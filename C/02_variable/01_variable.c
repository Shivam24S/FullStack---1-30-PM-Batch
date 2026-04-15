

#include <stdio.h>

int main()
{

    // what is variable -> variable is storage container which store some data in our program;

    // what is declaration;

    int num;

    // what is variable initialization

    num = 24;

    // printf("%d", num);

    // rules

    // reinitialization

    num = 48;

    printf("%d", num);

    // you can't able to define variable with same name again in same scope

    // int num = 50;
    // printf("%d", num);

    if (1)
    {
        int num = 25;

        printf("\nagain declared, %d", num);
    }

    return 0;
}