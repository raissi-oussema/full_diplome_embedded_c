/*
    ♥ Calculator main function ♥
*/
#include <stdio.h>
#include "lab03.h"

int main()
{
    int firstOprand;
    int secondOperand;
    char operation;

    printf("wELCOME TO CALCULATOR\n") ;
    printf("----------------------\n");
    printf("Enter the equation\n")    ;
    scanf("%d %c %d", &firstOprand, &operation, &secondOperand);
    printf("%d %c %d = %.2f",
    firstOprand,
    operation,
    secondOperand,
    calculate(firstOprand, operation, secondOperand));
    
    return 0;
}