/*
    print alphabets using pointers
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char *ptr = (char*) malloc (24 * sizeof(char));
    if (ptr == NULL){
        printf("Allocation failed; exit with code -1\n");
    }
    else{
        printf("Allocation done successfully ! \n");
    }
    ptr [0] = 'A';
    for (int i=0; i<=25; i++){
        ptr[i+1] = (ptr[i])+1;
    }
    for (int i=0; i<=25; i++){
        printf("%c", ptr[i]);
    }
}