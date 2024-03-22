/*
    \Write a C program to calculate the factorial of an integer 
    \enetered by the user using while loop
*/
#include <stdio.h>
// calculateFactorial prototype
int calculateFactorial(int number);

void main()
{
    int inputNumber;
    printf("Enter the number to calculate its factorial : ");
    scanf("%d", &inputNumber);
    printf("%d", calculateFactorial(inputNumber));
}

//calculateFactorial definition
int calculateFactorial(int number)
{
    int _resultFactorial = 1;
    if (number == 0)
    {
        return 1 ;
    }
    while (number > 1)
    {
        _resultFactorial *= number;
        number--;
    }
    return _resultFactorial;
}
