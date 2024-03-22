/*
    Factorial using pointer
*/
#include <stdio.h>
void main()
{
    int number,res=1;
    printf("Input number to calculate factorial : ");
    scanf("%d", &number);
    int *ptr = &number;
    if (*ptr == 0){
        printf("0");
    }
    while (*ptr != 0)
    {
        res *= *ptr;
        //printf("%d mult\n", number);
        (*ptr)--;
    }
    printf("The rsult is %d\n", res);
}