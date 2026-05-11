

#include <stdio.h>

int main()
{

    int size;

    printf("enter the size of an array ");

    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {

        printf("array[%d] ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n printing the array elements\n ");

    for (int i = 0; i < size; i++)
    {

        printf("%d\n", arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < size; i++)
    {

        sum += arr[i];
    }

    float avarage = (float)sum / size;

    printf("\navarage of an array %.1f", avarage);

    return 0;
}