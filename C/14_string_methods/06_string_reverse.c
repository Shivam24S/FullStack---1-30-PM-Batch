

#include <stdio.h>
#include <string.h>

int main()
{

    char word[100];

    printf("\n enter any string ");

    fgets(word, sizeof(word), stdin);

    char reverseString[sizeof(word)];

    int length = strlen(word);

    int i = 0, j = 0;

    for (i = length - 1, j = 0; i >= 0; i--, j++)
    {

        reverseString[j] = word[i];
    }

    reverseString[j] = '\0';

    printf("\n the reverse string is  %s", reverseString);
    return 0;
}