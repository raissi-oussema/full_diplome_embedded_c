#include <stdio.h>
float calculate(int a, char op, int b)
{
    float res = 0;
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
    case '/':
        res = a/(float)b;
        break;
    default:
        printf("INVALID OPERATION");
    }
    return res;
}
