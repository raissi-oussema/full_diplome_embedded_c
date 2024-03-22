#include<stdio.h>
/* 
    \Write a program in C to take input number from 
    \user then display the multiplication table of the 
    \given number 
*/
int main ()
{
    int _inputNumber ;
    int _counter = 1 ;
    
    printf("Enter the number : ");
    scanf("%d", &_inputNumber);
    printf("--------------------\n");
    while (_counter <= _inputNumber)
    {
        printf("%d X %d = %d \n", _inputNumber, _counter, (_inputNumber * _counter));
        ++_counter ;
    }
    printf("--------------------\n");
    return 0 ;
}