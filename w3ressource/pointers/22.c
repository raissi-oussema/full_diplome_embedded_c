/*
    print a string in the reversed order using pointers
*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    char *ptr = (char*) malloc( 25 * sizeof(char));
    ptr[0] = 'h';
    ptr[1] = 'e';
    ptr[2] = 'l';
    ptr[3] = 'l';
    ptr[4] = 'o';
    ptr[5] = '\0';

    int e = (int) &ptr[0]; //memory address of first element 
    char *temp = ptr;

    while ( *temp != '\0'){
        temp++;
    }

    int lenght = (int) temp - (int) e; // lenght

    for (int i= lenght-1 ; i >= 0 ; i--){
        printf("%c", *(&ptr[i])) ; // or directly ptr[i]
    }
}