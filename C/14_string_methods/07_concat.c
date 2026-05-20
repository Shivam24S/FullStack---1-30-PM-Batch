

#include <stdio.h>
#include <string.h>

int main()
{

    char word1[] = "good";

    char word2[] = " morning";

    strcat(word1, word2);

    printf("\n the concat string %s", word1);

    return 0;
}