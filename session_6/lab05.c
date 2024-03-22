#include <stdio.h>
/*
    Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops
*/
#define MAX_RANGE   51
int main()
{
    int _sumOdd  = 0 ;
    int _sumEven = 0 ;
    int _counter = 1 ;
    do
    {
        _sumOdd  += _counter ;
        _counter++ ;
        // FIXME :not the correct implementation
        // DONE
        if (_counter <= MAX_RANGE) 
        {
            _sumEven += _counter ;
            _counter++ ;
        } 
        else {/* for misra C to be happy */}   
    } while (_counter <= MAX_RANGE);
    
    printf("Sum of even numbers : %d\n", _sumEven);
    printf("Sum of odd numbers : %d\n", _sumOdd)  ;
    
    return 0;
}