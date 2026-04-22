

#include <stdio.h>

int main()
{

    int age = 18;

    // if (age >= 18)
    // {
    //     printf("you can give vote");
    // }
    // else
    // {
    //     printf("you can't give vote");
    // }

    // shorthand syntax 

    age >= 18 ? printf("you can give vote") : ("you can't give vote");

    return 0;
}