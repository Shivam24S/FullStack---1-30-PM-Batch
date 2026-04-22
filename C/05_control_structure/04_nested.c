

#include <stdio.h>

int main()
{

    int age, drivingLicence;

    printf("\nenter your age : ");

    scanf("%d", &age);

    if (age >= 18)
    {

        printf("\ndo you have driving licence choose (1 for yes and 0 for no) : ");

        scanf("%d", &drivingLicence);
    }

    if (age >= 18)
    {

        if (drivingLicence == 1)
        {

            printf("\nyou are eligible for driving");
        }
        else
        {
            printf("\n you have to register on parivahan saarthi");
        }
    }
    else
    {
        printf("\n your age is not eligible");
    }

    return 0;
}