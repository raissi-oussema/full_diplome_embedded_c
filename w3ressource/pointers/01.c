#include <stdio.h>
void main()
{
    int m = 10  ;
    int n,o     ;
    int *z = &m ;

    printf("%d\n", *z);// Printing the value pointed to by z using *z
    printf("%p\n", z) ;// Printing the address stored in z using %p
    printf("%p\n", &m);// Printing the address of m using &m
    printf("%p\n", &z);// Printing the address of z using &z
    printf("%p\n", &o);// Printing the address of o using &o
    printf("%p\n", &n);// Printing the address of n using &n
    
}