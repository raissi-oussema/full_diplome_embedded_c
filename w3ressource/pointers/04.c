/*
    Write a program in C to add two numbers using pointers.
    Test Data :
    Input the first number : 5
    Input the second number : 6
    Expected Output :

    The sum of the entered numbers is : 11 
*/
#include <stdio.h>
// addTwoNumbers declaration
int addTwoNumbers(int *numberOne, int *numberTwo);

void main()
{
    int numberOne = 5;
    int numberTwo = 6;

    int *pnumberOne = &numberOne;
    int *pnumberTwo = &numberTwo;

    printf(" The sum of the entered numbers is : %d", addTwoNumbers(pnumberOne, pnumberTwo));

}
// addTwoNumbers definition
int addTwoNumbers(int *pnumberOne, int *pnumberTwo)
{
    return (*pnumberOne + *pnumberTwo) ;
}
