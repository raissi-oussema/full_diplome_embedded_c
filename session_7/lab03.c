/*
    swap 2 integer in a function using call by reference 
*/
#include<stdio.h>
void swapTwoNumbers(int *firstNumber, int *secondNumber);
void main(){
    int firstNumber,secondNumber;
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    swapTwoNumbers(&firstNumber, &secondNumber);
    printf("first number after swap : %d\n", firstNumber);
    printf("second number after swap : %d\n", secondNumber);
}
void swapTwoNumbers(int *firstNumber, int *secondNumber){
    *firstNumber  = *firstNumber + *secondNumber;
    *secondNumber = *firstNumber - *secondNumber;
    *firstNumber  = *firstNumber - *secondNumber;
}