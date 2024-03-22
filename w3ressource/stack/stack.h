#if !defined(STACK_H_)
#define STACK_H_

typedef struct {
    int *arr;
    int top;
    int sizeOfStack;
}Stack;

Stack *createStack(int sizeOfStack);
int isEmpty(Stack *stack);
void displayStack(Stack *stack);
void pushToStack(Stack *stack, int value);
int popFromStack(Stack *stack);
void sortStack(Stack *stack);

#endif // MACRO
