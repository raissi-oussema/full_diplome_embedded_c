/*
    Write a program in C to add numbers using #call by reference.
    Test Data :
    Input the first number : 5
    Input the second number : 6
    Expected Output :

    The sum of 5 and 6  is 11 
*/
#include<stdio.h>
// addTwoNumbers declaration
int addTwoNumbers(int *numberOne, int *numberTwo);

void main()
{
    int numberOne = 5;
    int numberTwo = 6;

    printf(" The sum of the entered numbers is : %d", addTwoNumbers(&numberOne, &numberTwo));

}
// addTwoNumbers definition
int addTwoNumbers(int *pnumberOne, int *pnumberTwo)
{
    return (*pnumberOne + *pnumberTwo) ;
}
