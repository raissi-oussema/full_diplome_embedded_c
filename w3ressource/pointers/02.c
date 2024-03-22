/*
 Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 
*/
#include <stdio.h>

int main()
{
    int m = 29 ; // unsigned const integer m
    int *ab = &m ; // pointer to m address

    printf("Address stored in pointer ab is : %p\n", ab) ;
    printf("content of pointer ab is : %i\n", *ab) ;

    m = 34 ;

    printf("Address stored in pointer ab is : %p\n", ab) ;
    printf("content of pointer ab is : %i\n", *ab) ;

    *ab = 7 ;

    printf("Address stored in pointer ab is : %p\n", ab) ;
    printf("Value of m is : %i", m) ;

    return 0;
}