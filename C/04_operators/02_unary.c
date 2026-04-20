

#include <stdio.h>

int main()
{

    // in unary operator you can do calculation and operation on single operand;

    int num = 24;

    printf("%d", num);

    // pre increment


    printf("\npre increment %d", ++num);

    // post increment

    printf("\npost increment %d", num++);

    printf("\nlatest value %d",num);


    // pre decrement

    printf("\npre decrement %d",--num);

    // post decrement

    printf("\n post decrement %d",num--);

      printf("\nlatest value %d",num); 

    return 0;
}