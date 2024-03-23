/*
    make a void function make the multiplication and addition of two number
*/
#include <stdio.h>
void prettyFunction(int firstNumber, int secondNumber, int *multiplicationRes, int *additionResult);
void main()
{
    int firstNumber  = 10;
    int secondNumber = 20;

    int multiplicationRes, additionResult;
    prettyFunction(firstNumber, secondNumber, &multiplicationRes, &additionResult);
    printf("Result of Summation : %d\n", additionResult);
    printf("Result of Multiplication : %d", multiplicationRes);
}
void prettyFunction(int firstNumber, int secondNumber, int *multiplicationRes, int *additionResult)
{
    *(additionResult)    = firstNumber + secondNumber;
    *(multiplicationRes) = firstNumber * secondNumber;
}