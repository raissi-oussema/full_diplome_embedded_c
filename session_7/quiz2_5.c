/*
    pointer array manipulation (postfix and prefix)
*/
#include <stdio.h>

void main(){
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    printf("%d ", ++*ptr);
    printf("%d ", *++ptr);
    printf("%d ", *ptr++);
    printf("%d ", *ptr);
    printf("%d ", ++(*ptr));
    printf("%d ", (*++ptr)++);
    printf("%d ", (*ptr));
}
