#include <stdio.h>

int main() {
    int Numbers[] = {1, 2, 3, 4, 5};
    int Sum = 0;

    // Explicit definition of loop steps and state changes
    for (int i = 0; i < 5; i++) {
        Sum = Sum + Numbers[i];
    }

    printf("The sum is %d\n", Sum);
    return 0;
}