
#include <stdio.h>
#include <string.h>

// int main()
// {

//     char string[] = "any random string here";

//     int length = strlen(string);

//     printf("\n the length of string is %d", length);

//     return 0;
// }

// now manually

int main()
{

    char string[100];

    printf("\n enter any string ");

    fgets(string, sizeof(string), stdin);

    int i;

    for (i = 1; string[i] != '\0'; i++)
    {

        
    }

    printf("\n the length of string is %d", i-1);

    return 0;
}
