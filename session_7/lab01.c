#include <stdio.h>
void main(){
    int x = 50;
    int *ptr_ = &x;
    
    printf("Value before change is : %d\n", x) ;
    *ptr_ = 70;
    printf("Value after change is : %d", x) ;
}
