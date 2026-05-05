// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", j);
        }
      

        for (int k = 1; k <= 2 * (i - 1); k++)
        {
            printf(" ");
        }

        for (int l = n - i + 1; l >= 1; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}