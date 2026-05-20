
#include <stdio.h>

int main()
{

    char string[100];

    printf("\n enter the string ");

    fgets(string, sizeof(string), stdin);

    printf("\n entered string is %s", string);

    int i = 0;

    for (i = 0; string[i] != '\0'; i++)
    {
    }

    int length = i - 1;

    printf("\n the length of string %d", length);

    for (int i = 0; i <= length; i++)
    {

        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
        }
    }

    printf("\n the lowerCase string is %s", string);

    return 0;
}
