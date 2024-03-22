/*
    Sort a stack 
*/
#include<stdio.h>
#include <stdlib.h>
#include "stack.h"
#define ARRAY_SIZE  20 // 3 to check stack overflow
void main(){
    Stack *newStack;

    newStack = createStack(ARRAY_SIZE);
    //popFromStack(newStack); // to check stack underflow
    pushToStack(newStack, 20);
    pushToStack(newStack, 10);
    pushToStack(newStack, 50);
    displayStack(newStack);
    pushToStack(newStack, 40);
    displayStack(newStack);
    sortStack(newStack);
    displayStack(newStack);

    free(newStack);
}