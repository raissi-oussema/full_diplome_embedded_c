#include <stdio.h>
void main(){
    int a = 8 ;
    int b = 3 ;
    int and_ = a & b ; // 1000 AND  0011 ===> {1&0 | 0&0 | 0&0 | 0&1 | 0&1} = 0b 0000 = 0 base(10)
    int or_ = a | b ; // 1000 OR 0011 ===> {1|0 | 0|0 | 0|0 | 0|1 | 0|1} = 0b 1011 = 11 base (10) 
    int xor_ = a ^ b; // 1000 XOR 0011 ===>   {1^0 | 0^0 | 0^0 | 0^1 | 0^1} =0b 10011 = 11 base(10)
    int not_a = ~a ; // a = 0000 1000 ==> NOT a = 1111 0111 = MSB is 1 --> (-1)*128 +  64+32+16+4+2+1 = -9 = (-a-1)
    int not_b = ~b ; // b = 0000 0011 ==> NOT b = 1111 1100 = MSB is 1 --> (-1)*128 +  64+32+16+8+4 = -4 = (-b-1)
    int shift_left_a_by_b_ = a << b ;// 0000 1000 << 3 = 0100 0000 = 64 base(10)
    int shift_right_a_by_b = a >> b ;// 0000 1000 >> 3 = 0000 0001 = 1 base(10)
    printf("A = 8 ; B = 3\n");
    printf("A & B: %d \nA | B : %d\nA ^ B : %d\n~A : %d\n~B : %d\nA << B : %d\nA >> b : %d\n",and_, or_, xor_, not_a, not_b, shift_left_a_by_b_, shift_right_a_by_b);
}