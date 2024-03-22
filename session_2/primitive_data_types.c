/* Decimal {(char :1byte) ; (int :4bytes)}
floating types {(float :4bytes) ; (double : 8bytes)}*/
#include <stdio.h>
void main()
{
    /*Decimal*/
    char  x='A' ;
    int y=10;
    /*floating type*/
    float z = 1.5;
    double a = 125.45;
    printf("size of char %d\n",sizeof(x));
    printf("size of int %d\n",sizeof(y));
    printf("size of float %d\n",sizeof(z));
    printf("size of double %d",sizeof(a));
}