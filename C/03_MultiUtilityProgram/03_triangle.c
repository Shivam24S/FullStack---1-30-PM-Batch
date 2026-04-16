

#include <stdio.h>

int main()
{

    float firstAngle, secondAngle, thirdAngle;

    printf("\n enter first angle\n");
    scanf("%f", &firstAngle);

    printf("\n enter second angle\n");
    scanf("%f", &secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);

    printf("the third angle value is %.2f", thirdAngle);

    return 0;
}