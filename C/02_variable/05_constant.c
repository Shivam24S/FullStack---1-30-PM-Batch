

#include <stdio.h>

// macro

#define PI 3.14

int main()
{

    // constant is fixed value which can't be changed later ;

    // we can define constant in c using two method 1. using constant keyword  and 2. using macro at top of the program

    // when defining the constant variable you have to initialize must

    // we  can't reassign value again in our constant variable

    // we should name our constant variable in Capital later as per global convention

    const int NUM = 24;

    // num = 50;

    printf("%d", NUM);

    printf("\n%f", PI);

    // we can't we have to initialize

    // const int num1;

    // // num1 = 30;

    return 0;
}