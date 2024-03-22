/*
    convert from decimal to binary
*/
#include <stdio.h>
#include "lab04.h"
#include <windows.h>
//assumed that the max input is 32 bit integer !
char binaryResult[32]; 

void main()
{
    LARGE_INTEGER frequency;
    LARGE_INTEGER start_time;
    LARGE_INTEGER end_time;
    double elapsed_time;


    
    int scannedNumber;
    printf("Input any decimal number : \n");
    printf("---------------------------\n");
    scanf("%d", &scannedNumber);

    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&start_time);

    convertFromDecimalToBinary(scannedNumber);
    printf("The binary value is : %s\n", binaryResult);

    QueryPerformanceCounter(&end_time);
    elapsed_time = (double)(end_time.QuadPart - start_time.QuadPart) / frequency.QuadPart;

    printf("Execution Time: %f seconds\n", elapsed_time);
}