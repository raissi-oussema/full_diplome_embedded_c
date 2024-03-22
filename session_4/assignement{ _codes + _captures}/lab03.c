#include <stdio.h>
void main(){
    int INT_0,INT_1;
    printf("Please Enter Number 1:");
    scanf("%d", &INT_0);
    printf("Please Enter Number 2:");
    scanf("%d", &INT_1);
    printf("%d + %d = %d\n",INT_0,INT_1,INT_0+INT_1);
    printf("%d - %d = %d\n",INT_0,INT_1,INT_0-INT_1);
    printf("%d * %d = %d\n",INT_0,INT_1,INT_0*INT_1);
    printf("%d / %d = %f\n",INT_0,INT_1,(INT_0/(float)(INT_1)));
    printf("%d AND %d = %d\n",INT_0,INT_1,INT_0 && INT_1);
    printf("%d OR %d = %d\n",INT_0,INT_1,INT_0 || INT_1);
    printf("%d XOR %d = %d\n",INT_0,INT_1,INT_0 ^ INT_1);
    
}