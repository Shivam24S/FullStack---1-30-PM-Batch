

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("enter celsius\n ");

    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("\nFahrenheit value is %.2f", fahrenheit);

    return 0;
}