// 11111
// 2222
// 333
// 44
// 5

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j <= n; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}