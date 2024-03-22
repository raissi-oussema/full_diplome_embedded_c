/*
    Create a fuction that calculate the square of a given number
*/
#include "lab03.h"
#include <stdio.h>

void main()
{
    int inputNumber ;

    printf ("Function : find square of any number : \n");
    printf("----------------------------------------\n");
    printf("Input any number for square : ");
    scanf("%d", &inputNumber);

    printf("The square of %d is : %d\n",
    inputNumber,
    calculateSquare(inputNumber)
    );
}
