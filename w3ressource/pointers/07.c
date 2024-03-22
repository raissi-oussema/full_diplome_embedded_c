/*
    Write a program in C to store n elements in an array and print the elements using a pointer.
*/
#include <stdio.h>
void main()
{
    int _arraySize;

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &_arraySize);
    printf("Input 5 number of elements in the array : ");

    int tab[_arraySize];
    int _counter = 0   ;

    int *ptrTab = &tab;

    while (_counter < _arraySize)
    {
        scanf("%d", &tab[_counter]);
        _counter++;
    }
    for (int i=0; i<_arraySize; i++)
    {
        printf("element - 0 : %d\n", ptrTab[i]);
    }

}