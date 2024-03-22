#include <stdio.h>
void main(){
    int INT_0, INT_1;
    printf("Please Enter First Operand  : ");
    scanf("%d",&INT_0);
    printf("Please Enter Second Operand : ");
    scanf("%d",&INT_1);
    int RES_OPERATION = (INT_0 >= INT_1) ? printf("%d is greater or equal than %d",INT_0,INT_1):printf("%d is lower than %d",INT_0,INT_1);
}