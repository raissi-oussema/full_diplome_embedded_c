#include <stdio.h>
void main(){
    int a;
    int b;
    char op;
    float res = 0;
    printf("wELCOME TO CALCULATOR\n----------------------\nEnter the equation\n");
    scanf("%d %c %d", &a, &op, &b);
    
    switch (op)
    {
    case '+':
        res = a+b;
        break;
    case '-':
        res = a-b;
        break;

    case '*':
        res = a*b;
        break;
    
    default:
        res = a/(float)b;
        break;
    }
    printf("%d %c %d = %.2f", a, op, b, res);
}