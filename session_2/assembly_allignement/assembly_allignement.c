#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int z;

    asm (
        "cmp %[x], %[y];"
        "je function_0;"
        "jne function_1;"
        "function_0:"
        "mov %[z], %[x];"
        "add %[y], %[z];"
        "jmp end_asm;"
        "function_1:"
        "mov %[z], %[x];"
        "imul %[y], %[z];"
        "end_asm:;"
        : [z] "=r" (z)
        : [x] "r" (x), [y] "r" (y)
        : 
    );

    printf("Result: %d\n", z);

    return 0;
}
