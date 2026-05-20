#include <stdio.h>
#include <ctype.h>

int main()
{

    char string[100];

    printf("\n enter string ");

    fgets(string, sizeof(string), stdin);

    char upperCase[sizeof(string)];

    for (int i = 0; string[i] != '\0'; i++)
    {

        upperCase[i] = toupper(string[i]);
    }

    printf("\n the entered string is %s", string);

    printf("\n the uppercase string is %s", upperCase);

    return 0;
}