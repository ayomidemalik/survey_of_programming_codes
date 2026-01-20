#include <stdio.h>

int main() {
    int Count = 50;        // The type is explicitly declared as an integer
    float Price = 19.99;   // The type is explicitly declared as a float
    // Number = 10;        // Results in an error due to undeclared data type
    // Count = "Ten";      // Results in incompatible types compile time error

    printf("Count: %d\n", Count);
    return 0;
}