

#include <stdio.h>

int main()
{

    int size;

    printf("enter array size ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("array [%d] ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nprinting array\n");

    for (int i = 0; i < size; i++)
    {

        printf("%d\n", arr[i]);
    };

    int pos;

    printf("\n enter array position to delete ");
    scanf("%d", &pos);

    printf("\n before printing the value will be deleted %d", arr[pos]);

    for (int i = pos; i < size - 1; i++)
    {

        arr[i] = arr[i + 1];
    }
    size--;

    printf("\n after printing updated deleted value %d", arr[pos]);

    printf("\n after delete updated array ");

    for (int i = 0; i < size; i++)
    {

        printf("%d\n", arr[i]);
    };

    return 0;
}