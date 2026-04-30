//     1
//    21
//   321
//  4321
// 54321

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = n - i; j >= 1; j--)
        {
            printf(" ");
        }

        for (int k = i; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}