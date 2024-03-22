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
    printf("%d / %d = %d\n",INT_0,INT_1,INT_0/INT_1);
    printf("%d %% %d = %d\n",INT_0,INT_1,INT_0%INT_1);
}