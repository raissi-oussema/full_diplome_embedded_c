#include <stdio.h>
/*Write a C program to print numbers from 0 to 10 and from 10 to 0 using two while loops*/
#define LOOP_RANGE  10
int main()
{
    int _counter = 0 ;
    printf("Number from 0 to 10 : \n");
    while (_counter <= LOOP_RANGE)
    {
        printf("%d ", _counter);
        ++_counter;
    }

    printf("\n");
    _counter = LOOP_RANGE ;
    printf("Number from 10 to 0 : \n");

    while (_counter >= 0)
    {
        printf("%d ", _counter);
        --_counter;
    }

    return 0;
}