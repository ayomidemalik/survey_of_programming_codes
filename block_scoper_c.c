#include <stdio.h>

int main() {
    if (1) {
        int number = 10; // The variable 'number' only exists within these braces
        printf("%d", number);
    }

    // printf("%d", number); // An error of undeclared variable 'number' occurs here -
    // out of scope
    return 0;
}