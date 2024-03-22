#include <stdio.h>
#include <string.h>

extern char binaryResult[32];

void revertString(char str[]) {
    // sorry for using predefined function ☻
    int length = strlen(str);
    // use two counter and swap until 
    // middle of string (valid of even or odd lenght)
    for (int i=0, j=(length-1); i<j; i++, j--) 
    {   // swap str[i] & str[j] without temp variable
        str[i] = str[i]+str[j];
        str[j] = str[i]-str[j];
        str[i] = str[i]-str[j];
    }
}

void convertFromDecimalToBinary(int number)
{
    int j = 0 ;
    do
    {
        binaryResult[j] = ((number%2) == 0) ? '0' : '1' ;
        number=(number/2);
        j++;

    }while (number != 0);

    revertString(binaryResult);
}