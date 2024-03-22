#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


Stack *createStack(int sizeOfStack){
    Stack *newStack = (Stack *) malloc (sizeof(Stack));
    if (newStack == NULL){
        printf("Memory allocation failed!");
        exit(EXIT_FAILURE);
    }
    newStack->sizeOfStack = sizeOfStack;
    newStack->top = -1; // empty stack

    newStack->arr = (int *) malloc (sizeOfStack*(sizeof(int)));
    if (newStack->arr == NULL){
        printf("Memory allocation failed!");
        free(newStack);
        exit(EXIT_FAILURE);
    }
    return newStack;
}

void pushToStack(Stack *stack, int value){
    if (stack->top == stack->sizeOfStack-1){
        printf("Stack overflow !");
        exit(EXIT_FAILURE);
    }
    stack->arr[(++stack->top)] = value;
}
int isEmpty(Stack *stack){
    return (stack->top == -1);
}
void displayStack(Stack *stack){
    if (isEmpty(stack)){
        printf("Stack is empty !\n");
        return;
    }
    for (int i=0; i<= stack->top; i++){
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}
int popFromStack(Stack *stack){
    if (isEmpty(stack)){
        printf("Stack underflow !");//we cannot remove from an empty list
        exit(EXIT_FAILURE);
    }
    stack->top--;
    return stack->arr[stack->top];
}
void sortStack(Stack *stack){
    //Stack sortedStack;
    if (isEmpty(stack)){
        printf("cannot sort an Empty stack !");
        exit(EXIT_FAILURE);
    }
    int *arr = stack -> arr;
    int size = stack->top;
    for (int i = 0; i<=size; i++){
        int min_index = i;
        for (int j=i+1; j<=size; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

}