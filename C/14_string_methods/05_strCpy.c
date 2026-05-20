

#include <stdio.h>

#include <string.h>

int main()
{

    char message[20] = "good morning";

    char copyString[sizeof(message)];

    // strcpy("destination","source");

    strcpy(copyString, message);

    printf("copied string %s", copyString);

    return 0;
}

