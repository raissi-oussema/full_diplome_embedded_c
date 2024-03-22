#include <stdio.h>
/*
    \1. Write C code will ask the user to enter 2 numbres
    \2. main function will call getMin that takes two arguments
    \ and return min between them
*/

// getMin declaration
int getMin(int firstNumber, int secondNumber);

void main()
{
    int firstNumber, secondNumber;
    printf("Enter Value of number 1 : ");
    scanf ("%d", &firstNumber);
    printf("Enter Value of number 2 : ");
    scanf ("%d", &secondNumber);
    printf("----------------------------\n");
    printf("The minimum number is %d", getMin(firstNumber, secondNumber));

}

//getMin definition
int getMin(int firstNumber, int secondNumber)
{
    return (firstNumber < secondNumber)
    ? firstNumber : secondNumber ;
}
