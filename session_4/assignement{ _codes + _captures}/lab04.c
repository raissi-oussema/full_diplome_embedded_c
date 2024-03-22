#include <stdio.h>
void main(){
    int INT_0;
    printf("Please Enter a Number :");
    scanf("%d", &INT_0);

    int SET_BIT_5 = 0; 
    int CLEAR_BIT_4 = 0; 
    int TOGGLE_BIT_6 = 0;

    SET_BIT_5 = (INT_0 | (1 << 5)) ; // x = 8 ; 0b 0000 1000 ==> x = 0b 0010 1000 = 40(10)
    printf("After SETTING 1 at bit number 5 ==> %d\n", SET_BIT_5);
    CLEAR_BIT_4 = INT_0 &~ (1 << 4) ; // x = 8 ; 0b 0000 1000 ==> x = 0b 0000 1000 = 8(10)
    printf("After CLEARING bit number 4     ==> %d\n", CLEAR_BIT_4);
    TOGGLE_BIT_6 = INT_0 ^ (1 << 6) ; // x = 8 ; 0b 0000 1000 ==> x = 0b 0100 1000 = 72(10)
    printf("After TOGGLING bit number 6     ==> %d\n",TOGGLE_BIT_6);
}