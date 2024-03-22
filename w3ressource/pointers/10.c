/*
    Calculate length of a string using pointers
*/
#include "stdio.h"
void main()
{
    char str[6] = "hello";
    char *ptr = &str[0]; // pointer to the first element at str
    int _counter = 0;
    while (*ptr != '\0')
    {
        ptr++; // pointer will increment by size of char (1)
        printf("%p\n",ptr);
        _counter++;
    }
    printf("%d\n", _counter);
}