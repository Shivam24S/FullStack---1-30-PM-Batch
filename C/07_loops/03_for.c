

#include <stdio.h>

int main()
{

    int num;

    printf("\n enter number you want to find total : ");

    scanf("%d", &num);

    int sum = 0;

    for (int i = 0; i <= num; i++)
    {

        sum += i;
    }

    printf("\ntotal is %d", sum);

    return 0;
}