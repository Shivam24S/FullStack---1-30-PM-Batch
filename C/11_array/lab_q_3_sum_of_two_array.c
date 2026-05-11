

#include <stdio.h>

int main()
{

    int size;

    printf("enter the size of an array ");
    scanf("%d", &size);

    int a[size], b[size], c[size];

    printf("\nentering first element of an array\n");

    for (int i = 0; i < size; i++)
    {

        printf("array [%d] ", i);
        scanf("%d", &a[i]);
    }

    printf("\nentering second element of an array\n");

    for (int i = 0; i < size; i++)
    {

        printf("array [%d] ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
    {

        c[i] = a[i] + b[i];
    }

    printf("\nnow printing the sum of two array\n ");

    for (int i = 0; i < size; i++)
    {

        printf("%d\n", c[i]);
    }

    return 0;
}