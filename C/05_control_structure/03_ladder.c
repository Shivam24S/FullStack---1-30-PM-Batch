

#include <stdio.h>

int main()
{

    int marks;

    printf("\n enter your grade : ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("\nyou have achieved A grade");
    }
    else if (marks >= 80)
    {
        printf("\n you have achieved B grade");
    }
    else if (marks >= 70)
    {
        printf("\n you have achieved C grade");
    }
    else if (marks >= 50)
    {
        printf("\n you have achieved D grade");
    }
    else if (marks >= 35)
    {
        printf("\n you have achieved E grade");
    }
    else
    {
        printf("\n you have failed this examination");
    }

    return 0;
}