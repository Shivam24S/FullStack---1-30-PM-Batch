

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char string[100];

    printf("\n enter the string ");

    fgets(string, sizeof(string), stdin);

    printf("\n the entered string is %s ", string);

    int length = strlen(string);

    for (int i = 0; i < length - 1; i++)
    {

        string[i] = tolower(string[i]);
    }

    printf("\n the lowercase string is %s ", string);

    return 0;
}