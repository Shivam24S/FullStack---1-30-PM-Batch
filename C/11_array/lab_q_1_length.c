#include <stdio.h>

int main()
{

    int size;
    printf("enter the array size ");

    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {

        printf("array [%d] ", i);
        scanf("%d", &arr[i]);
    }

    // output of an array
    for (int i = 0; i < size; i++)
    {

        printf("%d\n", arr[i]);
    }

    printf("\nthe length of an array %d", size);

    return 0;
}