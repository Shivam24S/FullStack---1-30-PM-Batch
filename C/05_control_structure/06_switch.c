

#include <stdio.h>

int main()
{

    char light;

    printf("\n enter signal light for current status (g for green , r for red, y = yellow) : ");

    scanf("%c", &light);

    switch (light)
    {

    case 'g':
        printf("\n you can go");
        break;

    case 'r':
        printf("\n you have to stop");
        break;

    case 'y':
        printf("\n you have to be prepared for stop");
        break;

    default:
    {
        printf("\nyou have entered wrong light signal");
    };
    }

    return 0;
}