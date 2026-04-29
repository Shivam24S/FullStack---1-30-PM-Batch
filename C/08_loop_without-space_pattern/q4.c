
// 12345
// 2345
// 345
// 45
// 5

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
