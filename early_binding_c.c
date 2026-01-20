#include <stdio.h>

int main() {
    int y = 50; // 'x' is bound to a specific memory address and int type at compile time
                // The type and memory location are fixed for the variable's lifetime.

    printf("%d", y);
    return 0;
}