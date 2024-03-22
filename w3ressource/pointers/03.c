/*
Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z  
*/
#include <stdio.h>
void main()
{
    int m    = 300        ;
    float fx = 300.600006 ;
    char cht = 'z'        ;

    int *p_0 = &m    ; 
    float *p_1 = &fx ;
    char *p_2 = &cht ;
    
    // Using & operator :    
    printf("address of m = 0x%p\n", &m)     ;
    printf("address of fx = 0x%p\n", &fx)   ;
    printf("address of cht = 0x%p\n", &cht) ;
    // Using & and * operator :
    printf("----------------------------------------\n");
    printf("value at address of m = %d\n", *(&m))       ;
    printf("value at address of fx = %.06f\n", *(&fx))  ;
    printf("value at address of cht = %c\n", *(&cht))   ;
    // Using only pointer variable :  
    printf("----------------------------------------\n");
    printf("address of m = 0x%p\n", p_0)    ;
    printf("address of fx = 0x%p\n", p_1)   ;
    printf("address of cht = 0x%p\n", p_2)  ;
    // Using only pointer operator :       
    printf("----------------------------------------\n");
    printf("value at address of m = %d\n", *(p_0))      ;
    printf("value at address of fx = %.06f\n", *(p_1))  ;
    printf("value at address of cht = %c\n", *(p_2))    ;
}