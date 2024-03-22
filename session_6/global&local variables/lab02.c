/*
    Write a program in C to swap two numbers using a function 
*/
/* #include <stdio.h>
// swapTwoNumbers declaration
void swapTwoNumbers();

// Global variable to temporary store data 
int firstNumber, secondNumber;

int main()
{
    //int firstNumber, secondNumber;
    printf("Function : swap two numbers using function\n");
    printf("------------------------------------------\n");
    printf("Enter 1st number : ");
    scanf("%d", &firstNumber);
    printf("Enter 2nd number : ");
    scanf("%d", &secondNumber);
    printf("Before swapping : n1 = %d, n2 = %d\n", firstNumber, secondNumber);
    swapTwoNumbers();
    printf("After swapping : n1 = %d, n2 = %d\n", firstNumber, secondNumber);

    return 0;
}

// swapTwoNumbers definition
void swapTwoNumbers()
{
    int temp = firstNumber    ;
    firstNumber = secondNumber;
    secondNumber = temp       ;
} */




// Another math approche
#include <stdio.h>
int main()
{
    int firstNumber, secondNumber;
    printf("Function : swap two numbers using function\n");
    printf("------------------------------------------\n");
    printf("Enter 1st number : ");
    scanf("%d", &firstNumber);
    printf("Enter 2nd number : ");
    scanf("%d", &secondNumber);
    printf("Before swapping : n1 = %d, n2 = %d\n", firstNumber, secondNumber);

    // without temp variable
    firstNumber = firstNumber + secondNumber ;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber ;
    
    printf("After swapping : n1 = %d, n2 = %d\n", firstNumber, secondNumber);

    return 0;
}